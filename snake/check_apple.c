#include <main.h>

void		check_apple(t_snake *snake)
{
	if (snake->head.x == snake->apple.x)
		if (snake->head.y == snake->apple.y)
		{
			snake->score++;
			snake->size++;
			snake->apple_here = 0;
		}
}