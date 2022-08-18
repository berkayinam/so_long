/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 05:47:26 by binam             #+#    #+#             */
/*   Updated: 2022/05/17 14:18:08 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	map_parent_error(t_data *data, int i)
{
	free(data->buffer);
	ft_map_free(data);
	if (i == 2)
		map_line_boundry_error();
	else if (i == 3)
		map_left_right_wall_error();
	else if (i == 4)
		map_bottom_or_top_error();
	else
		ft_printf("Error\n Maybe you missed your ANIME girl :((\n");
	exit(1);
}

void	map_line_boundry_error(void)
{
	ft_printf("Error\nMap Line too toooo long Error :((\n");
	exit(1);
}

void	map_bottom_or_top_error(void)
{
	ft_printf("Error\nYour ANIME girl falls out map Error :((\n");
	exit(1);
}

void	map_left_right_wall_error(void)
{
	ft_printf("Error\nMap Left Or Right WaLL Error :((\n");
	exit(1);
}

void	map_type_error(void)
{
	ft_printf("Error\nYour Map is not dinosaur :(( (.ber file type error)\n");
	exit(1);
}
