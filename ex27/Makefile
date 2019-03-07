PROGRAM_NAME = ft_display_file

CC = gcc

SRCS = ./srcs/ft_putstr.c \
		./srcs/ft_display_file.c \
		./main.c


INCLUDES = ./includes/libft.h

FLAGS = -Wall -Werror -Wextra

all : $(PROGRAM_NAME)

$(PROGRAM_NAME) :
	$(CC) $(FLAGS) -o $(PROGRAM_NAME) -I $(INCLUDES) $(SRCS)

clean :
	/bin/rm -f *.o 
	
fclean :	clean
	rm -rf $(PROGRAM_NAME)