NAME= space_invader
MAIN = main.c
SRC= $(shell find . -name "*.c" | grep -v $(MAIN))
HEAD= -I .

all:
ifeq ("x$(MOULITEST)", "x")
	gcc -Wall -Wextra -Werror -g $(SRC) $(MAIN) $(HEAD) -o $(NAME)
else
	echo "fucking MAKEFILE !!!... son of a bitch !"
endif

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

play: re
	./$(NAME)