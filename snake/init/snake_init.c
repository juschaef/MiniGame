#include <main.h>
#include <stdlib.h>

t_tail	*create_tail(t_snake *snake)
{
	t_tail *tail;

	tail = (t_tail *)malloc(sizeof(t_tail));
	tail->coord.x = snake->head.x;
	tail->coord.y = snake->head.y;
	tail->next = NULL;
	return (tail);
}

t_snake	*snake_init()
{
	t_snake *snake;

	snake = (t_snake *)malloc(sizeof(t_snake));
	snake->map = create_map();
	snake->body = NULL;
	snake->head.x = 1;
	snake->head.y = 1;
	snake->dirx= 1;
	snake->diry= 0;
	snake->apple_here = 0;
	snake->score = 0;
	snake->size = 2;
	return (snake);
}