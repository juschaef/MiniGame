#include <r_type.h>

void	player_handling(t_player *player, int key)
{
	player_move(player, key);
	player_laser_handler(player, key);
}