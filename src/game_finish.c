/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_finish.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 05:46:44 by binam             #+#    #+#             */
/*   Updated: 2022/03/07 21:56:13 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./solong.h"

void	ft_img_free(t_data *data)
{
	int	i;

	i = 0;
	while (i < 8)
		mlx_destroy_image(data->mlx, data->img[i++]);
	free(data->img);
}

void	ft_map_free(t_data *data)
{
	int	i;

	i = 0;
	while (data->map[i])
	{
		free(data->map[i]);
		data->map[i++] = NULL;
	}
	free(data->map);
	data->map = NULL;
}

void	game_finish(t_data *data)
{
	if (data->collect == data->exp && data->buffer[data->index] == 'E')
		ft_printf("SAVASCI BASARILI BIR SEKILDE KAPIYA ULASTI\n");
	ft_printf("GG WP ADIM SAYIN = %d\n", data->step);
	ft_img_free(data);
	ft_map_free(data);
	free(data->buffer);
	free(data);
	system("leaks so_long\n");
	exit(1);
}
