#include <main.h>
#include <stdlib.h>

void	tail_link(t_tail *tail1, t_tail *tail2)
{
	if (tail1)
		tail1->next = tail2;
}

void	unshift_tail(t_snake *snake)
{
	t_tail *tail;

	tail = create_tail(snake);
	tail_link(tail, snake->body);
	snake->body = tail;
}

int	tail_len(t_snake *snake)
{
	int len;
	t_tail *tail;

	tail = snake->body;
	len = 0;
	while (tail)
	{
		tail = tail->next;
		len++;
	}
	return (len);
}

void	lstelem_del(t_tail *elem, void (*delfn)())
{
	if (delfn)
		delfn(elem->coord);
	elem->coord.x = -1;
	elem->coord.y = -1;
	elem->next = NULL;
	free(elem);
}



void	pop_tail(t_snake *snake)
{
	t_tail *tail;
	t_tail *prev;

	tail = snake->body;
	while (tail->next)
	{
		tail = tail->next;
		if (tail->next)
			prev = tail;
	}
	lstelem_del(tail, NULL);
	if (snake->body == tail)
		snake->body = NULL;
	if (prev)
		prev->next = NULL;
}

t_tail *tail_get(t_snake *snake, int index)
{
	t_tail *tail;

	tail = snake->body;
	while (tail && index--)
		tail = tail->next;
	return (tail ? tail : NULL);
}

void	handle_size(t_snake *snake)
{
	int len;

	len = tail_len(snake);
	if (len > snake->size)
		pop_tail(snake);
}

void	handle_tail(t_snake *snake)
{
	unshift_tail(snake);
	handle_size(snake);
}

void	erase_tail(t_snake *snake)
{
	t_tail	*tail;
	t_tail	*next;

	tail = snake->body;
	while (tail)
	{
		next = tail->next;
		if (tail->coord.y > 0 && tail->coord.x > 0)
			snake->map[tail->coord.y][tail->coord.x] = ' ';
		tail = next;
	}
}


void	move_snake(t_snake *snake)
{
	erase_snake(snake);
	erase_tail(snake);
	handle_tail(snake);
	snake->head.x += snake->dirx;
	snake->head.y += snake->diry;
	check_fail(snake);
	check_apple(snake);
}
