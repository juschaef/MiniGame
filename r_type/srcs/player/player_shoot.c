#include <r_type.h>

void	player_shoot(t_player *player)
{
	t_coords *laser;

	laser = laser_new(player->coord.y);
	laser_push(player, laser);
}