#include <main.h>
#include <stdlib.h>

t_snake	*snake_init()
{
	t_snake *snake;

	snake = (t_snake *)malloc(sizeof(t_snake));
	snake->map = create_map();
	snake->head.x = 1;
	snake->head.y = 1;
	snake->dirx= 1;
	snake->diry= 0;
	snake->apple_here = 0;
	snake->score = 0;
	snake->size = 1;
	return (snake);
}