/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_screen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:41:48 by binam             #+#    #+#             */
/*   Updated: 2022/03/07 17:41:49 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/solong.h"

void	write_scr(t_data *data)
{
	(void)data;
	 //-fsanitize=address -g 
	 if (data->gameend == 1)
	 	system("leaks so_long");
}
