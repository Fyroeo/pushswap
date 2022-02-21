##
## EPITECH PROJECT, 2021
## B-CPE-110-LYN-1-1-pushswap-thomas.mazaud
## File description:
## Makefile
##

SRC		=	$(wildcard sources/*.c) \
			$(wildcard sources/operations/*.c)

OBJ		=	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS	=	-g3

all:	$(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f vgcore*

re:		fclean all

.PHONY: re fclean clean all
