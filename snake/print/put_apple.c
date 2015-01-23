#include <main.h>
#include <time.h>
#include <stdlib.h>

void		wall_handling(t_snake *snake)
{
	if (snake->apple.x == 0)
		snake->apple.x += 1;
	if (snake->apple.x == 40)
		snake->apple.x -= 1;
	if (snake->apple.y == 0)
		snake->apple.y += 1;
	if (snake->apple.y == 40)
		snake->apple.y -= 1;
}

void		put_apple(t_snake *snake)
{
	unsigned int seed;
	int place;
	if (!snake->apple_here)
	{
		seed = time(NULL);
		place = rand_r(&seed);
		place = place % (40 * 40);
		snake->apple.x = place / 40;
		snake->apple.y = place % 40;
		wall_handling(snake);
		snake->map[snake->apple.y][snake->apple.x] = 'a';
		snake->apple_here = 1;
	}
}