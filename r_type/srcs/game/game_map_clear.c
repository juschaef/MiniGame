#include <r_type.h>

static void	clear_player(char **map, t_player *player)
{
	map[player->coord.y][player->coord.x] = ' ';
}

static void	clear_laser(t_coords *laser, void *map_)
{
	char **map;

	map = map_;
	map[laser->coord.y][laser->coord.x] = ' ';
}

void	game_map_clear(t_game *game)
{
	clear_player(game->map, game->player);
	laser_iter(game->player, clear_laser, game->map);
}