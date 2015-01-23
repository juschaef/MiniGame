#include <main.h>

void	erase_snake(t_snake *snake)
{
	snake->map[snake->head.y][snake->head.x] = ' ';
}