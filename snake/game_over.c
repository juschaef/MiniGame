#include <main.h>
#include <unistd.h>
#include <stdlib.h>

void	game_over(t_snake *snake)
{
	snake->map[7][16] = 'G';
	snake->map[7][17] = 'A';
	snake->map[7][18] = 'M';
	snake->map[7][19] = 'E';
	snake->map[7][21] = 'O';
	snake->map[7][22] = 'V';
	snake->map[7][23] = 'E';
	snake->map[7][24] = 'R';
	print_map(snake);
	sleep(3);
	exit(1);
}