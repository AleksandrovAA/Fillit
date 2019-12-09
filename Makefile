# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngale <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 11:30:41 by ngale             #+#    #+#              #
#    Updated: 2019/11/18 20:01:31 by ngale            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit 

SRC_DIR = ./src/
OBJ_DIR	= ./obj/
INC_DIR = ./includes/
LIB_DIR = ./libft/

SRC_NAME = main \
		   fill_figure \
		   take_tetrimino \
		   get_next_line \
		   solve \
		   free_memory \

LIB_NAME = libft

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_NAME)))
OBJS = $(addsuffix .o, $(SRC_NAME))
LIBS = $(addprefix $(LIB_DIR), $(addsuffix .a, $(LIB_NAME)))

CFLAGS = -I$(INC_DIR) -I$(LIB_DIR)

all: $(NAME)

obj:
	gcc -Wall -Wextra -Werror $(CFLAGS) -c $(SRCS)

$(NAME): lib obj
	gcc -Wall -Wextra -Werror $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

lib:
	make -C $(LIB_DIR)

clean:
	make fclean -C $(LIB_DIR)
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, obj, clean