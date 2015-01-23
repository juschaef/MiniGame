#include <main.h>
#include <time.h>
#include <stdlib.h>

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
		snake->map[snake->apple.y][snake->apple.x] = 'a';
		snake->apple_here = 1;
	}
}