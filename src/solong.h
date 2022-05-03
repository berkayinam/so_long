/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:31:14 by binam             #+#    #+#             */
/*   Updated: 2022/03/16 15:42:23 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include "../mlx/mlx.h"
# include "../ft_printf/ft_printf.h"
# include "../get_next_line/get_next_line.h"

# define GROUND "./src/img/game_ground.xpm"
# define TREE "./src/img/game_wall.xpm"
# define SAKE "./src/img/game_sake.xpm"
# define DOOR1 "./src/img/exit_door_position_1.xpm"
# define PL_FT "./src/img/player_front.xpm"
# define PL_LT "./src/img/player_left.xpm"
# define PL_RT "./src/img/player_right.xpm"
# define PL_BK "./src/img/player_back.xpm"

typedef struct s_data
{
	char	**map;
	char	*buffer;
	void	*mlx;
	void	*mlx_window;
	void	**img;
	void	*character;
	int		imgx;
	int		imgy;
	int		x;
	int		y;
	int		mapw1;
	int		indeximg;
	int		collect;
	int		exp;
	int		step;
	int		gameend;
	int		check_parent;
	size_t	map_width;
	size_t	map_height;
	size_t	index;
}	t_data;

void	write_scr(t_data *data);
void	take_img(t_data *data);
void	moveup(t_data *data);
void	moveleft(t_data *data);
void	movedown(t_data *data);
void	moveright(t_data *data);
int		key_events(int keycode, t_data *data);
void	create_image_and_window(t_data *data);
void	get_map(t_data *data, char *argv2);
void	put_image_to_window(t_data *data);
void	put_image_background(t_data *data);
void	ft_map_free(t_data *data);
void	ft_img_free(t_data *data);
void	check_map_parent(t_data *data);
void	check_map_wall(t_data *data);
int		check_map_type(char *argv2);
void	map_line_boundry_error(void);
void	map_parent_error(t_data *data, int i);
void	map_left_right_wall_error(void);
void	map_bottom_or_top_error(void);
void	map_type_error(void);
void	game_finish(t_data *data);
void	check_something(t_data *data);
#endif
