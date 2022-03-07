/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 05:47:18 by binam             #+#    #+#             */
/*   Updated: 2022/03/07 20:08:41 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	xbutton(t_data *data)
{
	game_finish(data);
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc == 2)
	{
		data = (t_data *)ft_calloc(sizeof(t_data), 1);
		data->mlx = mlx_init();
		if (check_map_type(argv[1]))
			get_map(data, argv[1]);
		else
			map_type_error();
		data->mlx_window = mlx_new_window(data->mlx, 64 * data->map_width, 
				64 * data->map_height, "So_Long");
		create_image_and_window(data);
		data->karakter = data->img[4];
		put_image_background(data);
		put_image_to_window(data);
		write_scr(data);
		mlx_hook(data->mlx_window, 2, 1L << 0, key_events, data);
		mlx_hook(data->mlx_window, 17, 0, &xbutton, data);
		mlx_loop(data->mlx);
	}
	else
		ft_printf("Wrong Arguman");
	exit(1);
}
