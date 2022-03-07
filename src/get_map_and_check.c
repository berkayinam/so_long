/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_and_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 05:46:54 by binam             #+#    #+#             */
/*   Updated: 2022/03/07 22:04:33 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	get_map(t_data *data, char *argv2)
{
	int		fd;
	char	*tmp;
	char	*buffer;
	char	*buff;

	buff = NULL;
	fd = open(argv2, O_RDONLY);
	if (fd < 0)
		map_type_error();
	buffer = ft_calloc(1, 1);
	tmp = get_next_line(fd);
	if (!tmp)
		free(buffer);
	data->map_width = ft_strlen(tmp) - 1;
	while (tmp)
	{
		buff = ft_strjoin(buffer, tmp);
		free(buffer);
		free(tmp);
		buffer = buff;
		tmp = get_next_line(fd);
	}
	data->buffer = buffer;
	data->map = ft_split(buffer, '\n');
	check_map_parent(data);
}

void	check_map_parent(t_data *data)
{
	char	*map;
	int		player;
	int		exit;

	exit = 0;
	player = 0;
	map = data->buffer;
	while (*map)
	{
		if (*map == 'P')
			player++;
		else if (*map == 'C')
			data->collect++;
		else if (*map == 'E')
			exit++;
		map++;
	}
	if (!(player == 1 && data->collect >= 1 && exit >= 1))
		map_parent_error(data, 1);
	check_map_wall(data);
}

void	check_map_wall(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (data->map[++i])
		if (ft_strlen(data->map[i]) != data->map_width)
			map_parent_error(data, 2);
		i = -1;
	while (data->map[++i])
		if (data->map[i][0] != '1' || data->map[i][data->map_width - 1] != '1')
			map_parent_error(data, 3);
	j = i - 1;
	data->map_height = j + 1;
	i = -1;
	while (data->map[0][++i] && data->map[j][++i])
		if (data->map[0][i] != '1' || data->map[j][i] != '1')
			map_parent_error(data, 4);
	ft_printf("Wall Check Succes\n");
}

int	check_map_type(char *argv2)
{
	size_t	size;

	if (!argv2)
		return (0);
	size = ft_strlen(argv2) - 1;
	if (argv2[size] == 'r' && argv2[size - 1] == 'e'
		&& argv2[size - 2] == 'b' && argv2[size - 3] == '.')
		return (1);
	else
		map_type_error();
	return (0);
}
