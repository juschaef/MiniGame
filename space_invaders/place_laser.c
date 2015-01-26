#include <space_invader.h>

void	print_fn(t_coord coord, char **map)
{
	map[coord.y][coord.x] = '|';
}

void	print_laser(t_game *game)
{
	t_coords *laser;
	t_coords *next;

	laser = game->player->lasers;
	while (laser)
	{
		next = laser->next;
		print_fn(laser->coord, game->map);
		laser = next;
	}
}

void	place_laser(t_game *game)
{
	print_laser(game);
}