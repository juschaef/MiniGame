#include <main.h>

void	put_snake(t_snake *snake)
{
	snake->map[snake->head.y][snake->head.x] = 's';
}