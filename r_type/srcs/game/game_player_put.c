#include <r_type.h>

void	game_player_put(t_game *game)
{
	char **map;
	int y;
	int x;

	map = game->map;
	y = game->player->coord.y;
	x = game->player->coord.x;
	map[y][x] = '>';
}