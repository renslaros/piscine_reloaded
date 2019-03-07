# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    MakeFile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rlaros <rlaros@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/15 03:04:15 by rlaros         #+#    #+#                 #
#    Updated: 2019/01/15 03:12:39 by rlaros        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

INCLUDES = ./includes

FLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

OBJ = 	ft_putchar.o \
	ft_putstr.o \
	ft_strcmp.o \
	ft_strlen.o \
	ft_swap.o \

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all