#include <main.h>

int		main()
{
	t_snake *snake;

	snake = snake_init();
	loop(snake);
	return (0);
}