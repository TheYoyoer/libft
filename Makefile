# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsilva <rsilva@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 10:03:41 by rsilva            #+#    #+#              #
#    Updated: 2018/02/26 10:08:38 by rsilva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCFLAGS = -c -Wall -Wextra -Werror
SRCS = *.c
OBJECTS =  *.o
INCLUDE = *.h
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc $(CCFLAGS) -I$(INCLUDE) $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
