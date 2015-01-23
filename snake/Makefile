NAME= snake
SRC= *.c **/*.c
HEAD= -I includes

all:
	gcc -Wall -Wextra -Werror $(SRC) $(HEAD) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

play: re
	./$(NAME)