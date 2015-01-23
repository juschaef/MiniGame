NAME= snake
SRC= *.c
HEAD= -I .

all:
	gcc -Wall -Wextra -Werror $(SRC) $(HEAD) -o $(NAME)
	./$(NAME)

fclean:
	rm -f $(NAME)

re: fclean all