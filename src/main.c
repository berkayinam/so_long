/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 05:47:18 by binam             #+#    #+#             */
/*   Updated: 2022/03/16 15:45:23 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	xbutton(t_data *data)
{
	game_finish(data);
	return (0);
}

int	happyend(t_data *data)
{
	int	i;

	i = 0;
	if (data->gameend == 1)
	{
		ft_printf("Finally you find exit door\n");
		while (i++ < 700000000)
			;
		game_finish(data);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc == 2)
	{
		data = (t_data *)ft_calloc(sizeof(t_data), 1);
		if (!data)
			exit(1);
		data->mlx = mlx_init();
		if (check_map_type(argv[1]))
			get_map(data, argv[1]);
		else
			map_type_error();
		create_image_and_window(data);
		check_something(data);
		put_image_background(data);
		put_image_to_window(data);
		mlx_loop_hook(data->mlx, happyend, data);
		mlx_hook(data->mlx_window, 2, 1L << 0, key_events, data);
		mlx_hook(data->mlx_window, 17, 0, xbutton, data);
		write_scr(data);
		mlx_loop(data->mlx);
	}
	else
		ft_printf("Error\nWrong Arguman");
	exit(1);
}
