#include <main.h>

void	check_fail(t_snake *snake)
{
	if (snake->head.x == 0 || snake->head.x == 40)
		game_over(snake);
	else if (snake->head.y == 0 || snake->head.y == 40)
		game_over(snake);
}