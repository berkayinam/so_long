/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_screen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 05:57:36 by binam             #+#    #+#             */
/*   Updated: 2022/03/07 22:16:09 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/solong.h"

void	write_scr(t_data *data)
{
	char	*variable;

	variable = ft_itoa(data->exp * 42);
	mlx_string_put(data->mlx, data->mlx_window, 0, 20, 0xffff99, "Game Point");
	mlx_string_put(data->mlx, data->mlx_window, 80, 20, 0xffff99, variable);
	free(variable);
	variable = ft_itoa(data->step);
	mlx_string_put(data->mlx, data->mlx_window, 150, 20, 0xffff99, "Step : ");
	mlx_string_put(data->mlx, data->mlx_window, 200, 20, 0xffff99, variable);
	free(variable);
}
