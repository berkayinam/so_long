# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: binam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 18:58:49 by binam             #+#    #+#              #
#    Updated: 2022/03/17 18:58:56 by binam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = src/get_map_and_check.c src/take_image.c src/main.c src/game_finish.c\
	   src/msg_error.c src/key_events.c src/put_image_to_window.c

SRCS_BONUS = ./bonus/write_screen.c

SRCS_MAND  = src/write_screen.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:./bonus/.c=.o)

CC = gcc

MFLAGS =  ./libft/libft.a ./mlx/libmlx.a ./ft_printf/libftprintf.a ./get_next_line/get_next_line.a

AFLAGS =  -Wall -Wextra -Werror -I./mlx -I./libft -I./ft_printf -I./get_next_line

RM = rm -rf

NAME = so_long

all :$(MFLAGS) $(NAME)

$(MFLAGS):
	make -C ./libft
	make -C ./get_next_line
	make -C ./ft_printf

$(NAME): $(OBJS) $(SRCS_MAND)
	$(CC) $(OBJS) $(MFLAGS) $(SRCS_MAND) $(CFLAGS) -framework OpenGL -framework AppKit -o $(NAME)

bonus: $(MFLAGS) $(NAME)_bonus

$(NAME)_bonus : $(OBJS) $(OBJS_BONUS)
	$(CC) $(OBJS) $(MFLAGS) $(OBJS_BONUS) $(AFLAGS) -framework OpenGL -framework AppKit -o $(NAME)_bonus

fclean : clean
	$(RM) ./libft/*.a
	$(RM) ./src/*.a
	$(RM) ./ft_printf/*.a
	$(RM) ./get_next_line/*.a
	$(RM) $(NAME)
	$(RM) $(NAME)_bonus

clean :
	$(RM) ./libft/*.o
	$(RM) ./src/*.o
	$(RM) ./ft_printf/*.o
	$(RM) ./get_next_line/*.o
	$(RM) ./bonus/write_screen.o

re : fclean all

.PHONY : all bonus fclean clean re
