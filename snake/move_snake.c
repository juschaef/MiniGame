#include <main.h>

void	move_snake(t_snake *snake)
{
	erase_snake(snake);
	snake->head.x += snake->dirx;
	snake->head.y += snake->diry;
	check_fail(snake);
	check_apple(snake);
}