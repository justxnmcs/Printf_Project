##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## my_printf
##

SRC =   $(wildcard *.c)

NAME =  libmy.a

OBJ = $(SRC:.c=.o)

COPY = cp

all: $(NAME)

$(NAME):$(OBJ)
		$(AR) rcs $(NAME) $(OBJ)

clean:
	  $(RM) *.o

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
