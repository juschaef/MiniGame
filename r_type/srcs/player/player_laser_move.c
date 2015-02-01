#include <r_type.h>
#include <stddef.h>

static void	laser_move(t_coords *coords, void* context)
{
	t_player *player;

	player = context;
	coords->coord.x++;
	if (coords->coord.x >= 100)
		laser_del(coords, player);
}

void	player_laser_move(t_player *player)
{
	laser_iter(player, laser_move, player);
} 