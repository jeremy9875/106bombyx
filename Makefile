##
## Makefile for Makefile in /home/VSridhar78/106bombyx
## 
## Made by Sridhar Vengadesan
## Login   <VSridhar78@epitech.net>
## 
## Started on  Mon Feb  6 10:22:56 2017 Sridhar Vengadesan
## Last update Mon Feb  6 10:40:46 2017 Sridhar Vengadesan
##

NAME    =       106bombyx

SRC     =       106bombyx.c		\
		my_base_function.c	\

OBJ     =       $(SRC:.c=.o)

all:            $(NAME)

$(NAME):        $(OBJ)
		gcc $(OBJ) -W -Wall -Werror -Wextra -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:         all clean fclean re
