NAME= r_type
MAIN = main.c
SRC= $(shell find . -name "*.c" | grep -v $(MAIN))
HEAD= -I includes

all:
ifeq ("x$(MOULITEST)", "x")
	gcc -Wall -Wextra -Werror -g $(SRC) $(MAIN) $(HEAD) -o $(NAME)
else
	@echo "fucking MAKEFILE !!!... son of a bitch !"
endif

clean:
	@rm -f *.o

fclean:clean
	@rm -f $(NAME)
	@rm -rf *.dSYM

re: fclean all

play: re
	@./$(NAME)
