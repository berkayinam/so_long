/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 05:47:51 by binam             #+#    #+#             */
/*   Updated: 2022/03/16 15:45:18 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	create_image_and_window(t_data *data)
{
	check_something(data);
	data->img[0] = mlx_xpm_file_to_image(data->mlx,
			"./src/img/zemin.xpm",
			&data->imgx, &data->imgy);
	data->img[1] = mlx_xpm_file_to_image(data->mlx,
			"./src/img/agac.xpm",
			&data->imgx, &data->imgy);
	data->img[2] = mlx_xpm_file_to_image(data->mlx,
			"./src/img/sake.xpm",
			&data->imgx, &data->imgy);
	data->img[3] = mlx_xpm_file_to_image(data->mlx,
			"./src/img/kapi.xpm",
			&data->imgx, &data->imgy);
	data->img[4] = mlx_xpm_file_to_image(data->mlx,
			"./src/img/p_on.xpm",
			&data->imgx, &data->imgy);
	data->img[5] = mlx_xpm_file_to_image(data->mlx,
			"./src/img/p_sol.xpm",
			&data->imgx, &data->imgy);
	data->img[6] = mlx_xpm_file_to_image(data->mlx,
			"./src/img/p_sag.xpm",
			&data->imgx, &data->imgy);
	data->img[7] = mlx_xpm_file_to_image(data->mlx,
			"./src/img/p_arka.xpm",
			&data->imgx, &data->imgy);
}
void	check_something(t_data *data)
{
	data->mlx_window = mlx_new_window(data->mlx, 64 * data->map_width, 
				64 * data->map_height, "So_Long");
	if (!data->mlx_window)
		;
		//7 resim de kontrol edilecek;
	data->img = (void **)malloc(sizeof(void *) * 8);
	if (!data->img)
		;
	//free yapılacak 
}
