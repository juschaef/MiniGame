#include <main.h>

void	iter_tail(t_snake *snake)
{
	t_tail	*tail;
	t_tail	*next;

	tail = snake->body;
	while (tail)
	{
		next = tail->next;
		if (tail->coord.y > 0 && tail->coord.x > 0)
			snake->map[tail->coord.y][tail->coord.x] = 'q';
		tail = next;
	}
}

void	put_snake(t_snake *snake)
{
	snake->map[snake->head.y][snake->head.x] = 's';
	iter_tail(snake);
}