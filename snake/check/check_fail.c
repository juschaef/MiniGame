#include <main.h>

static	int	tail_collide(t_coord tail, t_coord head)
{
	if (tail.x == head.x && tail.y == head.y)
		return (1);
	else 
		return (0);
}


void	check_fail_tail(t_snake *snake)
{
	t_tail *tail;

	tail = snake->body;
	while (tail)
	{
		if (tail_collide(tail->coord, snake->head))
			game_over(snake);
		tail = tail->next;
	}
}

void	check_fail(t_snake *snake)
{
	if (snake->head.x == 0 || snake->head.x == 40)
		game_over(snake);
	else if (snake->head.y == 0 || snake->head.y == 40)
		game_over(snake);
	check_fail_tail(snake);
}