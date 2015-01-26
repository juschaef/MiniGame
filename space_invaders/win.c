#include <space_invader.h>
#include <unistd.h>
#include <stdlib.h>

void	win(t_game *game)
{
	char **map;

	map = game->map;

	map[10][27] = 'Y';
	map[10][28] = 'O';
	map[10][29] = 'U';
	map[10][31] = 'W';
	map[10][32] = 'I';
	map[10][33] = 'N';
	print_game(game);
	sleep(2);
	exit(0);
}