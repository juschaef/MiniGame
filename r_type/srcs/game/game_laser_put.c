#include <r_type.h>

static void	put_laser(t_coords *laser, void *map_)
{
	char **map;

	map = (char **)map_;
	map[laser->coord.y][laser->coord.x] = '-';
}

void	game_laser_put(t_game *game)
{
	laser_iter(game->player, put_laser, game->map);
}