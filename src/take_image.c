/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 05:47:51 by binam             #+#    #+#             */
/*   Updated: 2022/03/07 05:47:52 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	create_image_and_window(t_data *data)
{
	data->img = (void **)malloc(sizeof(void *) * 8);
	data->img[0] = mlx_xpm_file_to_image(data->mlx,
			"/Users/binam/Desktop/solong/img/zemin.xpm",
			&data->imgx, &data->imgy);
	data->img[1] = mlx_xpm_file_to_image(data->mlx,
			"/Users/binam/Desktop/solong/img/agac.xpm",
			&data->imgx, &data->imgy);
	data->img[2] = mlx_xpm_file_to_image(data->mlx,
			"/Users/binam/Desktop/solong/img/sake.xpm",
			&data->imgx, &data->imgy);
	data->img[3] = mlx_xpm_file_to_image(data->mlx,
			"/Users/binam/Desktop/solong/img/kapi.xpm",
			&data->imgx, &data->imgy);
	data->img[4] = mlx_xpm_file_to_image(data->mlx,
			"/Users/binam/Desktop/solong/img/p_on.xpm",
			&data->imgx, &data->imgy);
	data->img[5] = mlx_xpm_file_to_image(data->mlx,
			"/Users/binam/Desktop/solong/img/p_sol.xpm",
			&data->imgx, &data->imgy);
	data->img[6] = mlx_xpm_file_to_image(data->mlx,
			"/Users/binam/Desktop/solong/img/p_sag.xpm",
			&data->imgx, &data->imgy);
	data->img[7] = mlx_xpm_file_to_image(data->mlx,
			"/Users/binam/Desktop/solong/img/p_arka.xpm",
			&data->imgx, &data->imgy);
}
