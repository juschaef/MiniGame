#include <space_invader.h>

void	place_player(t_game *game)
{
	t_coord coord;

	coord = game->player->coord;
	game->map[coord.y][coord.x] = 'M';
	game->map[coord.y - 1][coord.x] = '^';
	game->map[coord.y][coord.x + 1] = ']';
	game->map[coord.y][coord.x - 1] = '[';
}