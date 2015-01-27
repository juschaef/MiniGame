NAME= r_type
SRC= *.c
HEAD= -I .

all:
	@gcc -Wall -Wextra -Werror $(SRC) $(HEAD) -o $(NAME)

fclean:
	@rm -f $(NAME)

re: fclean all

play: re
	@./$(NAME)