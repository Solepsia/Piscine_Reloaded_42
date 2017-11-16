# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grota <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 17:20:41 by grota             #+#    #+#              #
#    Updated: 2017/11/15 17:40:57 by grota            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
