#include <main.h>
#include <unistd.h>
#include <stdio.h>


void loop(t_pong *pong)
{
	int key;
	int count = 0;
	while (1)
	{
		key = getarrowkey();
		put_racket(pong, key);
		if (count == 10)
		{
			count = 0;
			set_dest(pong);
			clear_ball(pong);
			calcule_delta(pong);
			calcule_error(pong);
			put_ball(pong);
		}
		count++;
		system("clear");
		print_map(pong);
		usleep(10000);
	}
}
