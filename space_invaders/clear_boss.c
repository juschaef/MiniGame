#include <space_invader.h>

void	clear_boss(t_game *game)
{
	t_coord coord;

	coord = game->boss->coord;
	game->map[coord.y][coord.x] = ' ';
	game->map[coord.y][coord.x - 1] = ' ';
	game->map[coord.y][coord.x + 1] = ' ';
}
