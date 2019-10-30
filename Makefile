##
## EPITECH PROJECT, 2018
## 103cipher_2018
## File description:
## Makefile
##

SRC	=	main.c						\
		usual_fn/my_putchar.c		\
		usual_fn/my_putstr.c		\
		usual_fn/my_putnbr.c		\
		usual_fn/my_revstr.c		\
		usual_fn/my_getnbr.c		\
		usual_fn/my_strlen.c		\
		usual_fn/str_to_int.c		\
		src/message_e.c

NAME    =   103cipher

all:    $(NAME)

$(NAME):    all
	gcc -o $(NAME) $(SRC)

clean:  clean
	rm -f $(NAME)

re:	clean all

.PHONY: all clean re