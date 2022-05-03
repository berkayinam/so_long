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
#include <stdio.h>
//free(data);
static void	mallocfree(t_data *data)
{
	ft_map_free(data);
	free(data->buffer);
	ft_printf("Error\n Malloc error in data->img*\n");
	system("leaks so_long");
	exit(1);
}

static void	specialfree(t_data *data)
{
	while (data->indeximg--)
		if (data->img[data->indeximg] != NULL)
			mlx_destroy_image(data->mlx, data->img[data->indeximg]);
	free(data->img);
	ft_map_free(data);
	free(data->buffer);
	ft_printf("Error\n Malloc error Or Missing XPM file\n");
	system("leaks so_long");
	exit(1);
}

static void	subsystem_for_image(t_data *data, char *path)
{
	data->img[data->indeximg] = mlx_xpm_file_to_image(data->mlx, path,
			&data->imgx, &data->imgy);
	if (data->img[data->indeximg] == NULL)
	{
		data->indeximg++;
		specialfree(data);
	}
	else
		data->indeximg++;
}

void	create_image_and_window(t_data *data)
{
	data->img = (void **)malloc(sizeof(void *) * 2140000000000000);
	if (!data->img)
	{
		free(data->img);
		mallocfree(data);
	}
	subsystem_for_image(data, GROUND);
	subsystem_for_image(data, TREE);
	subsystem_for_image(data, SAKE);
	subsystem_for_image(data, DOOR1);
	subsystem_for_image(data, PL_FT);
	subsystem_for_image(data, PL_LT);
	subsystem_for_image(data, PL_RT);
	subsystem_for_image(data, PL_BK);
}

void	check_something(t_data *data)
{
	data->img[8] = 0;
	data->mlx_window = mlx_new_window(data->mlx, 64 * data->map_width,
			64 * data->map_height, "So_Long");
	if (!data->mlx_window)
		game_finish(data);
	data->character = data->img[4];
}
