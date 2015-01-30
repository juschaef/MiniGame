#include <r_type.h>

void	player_move(t_player *player, int key)
{
	if (key == 1 && player->coord.y < 29)
		player->coord.y++;
	else if (key == 2 && player->coord.y > 1)
		player->coord.y--;
}