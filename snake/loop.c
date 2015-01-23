#include <main.h>
#include <stdlib.h>
#include <unistd.h>


void	loop(t_snake *snake)
{
	int key;

	(void)snake;
	while (1)
	{
		key = getarrowkey();
		get_direction(snake, key);
		put_apple(snake);
		move_snake(snake);


		put_snake(snake);
		print_map(snake);
		usleep(100000);
	}
	key++;
}