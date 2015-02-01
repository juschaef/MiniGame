#include <r_type.h>
#include <stdlib.h>

void	laser_del(t_coords *laser, t_player *player)
{
	laser_link(laser->prev, laser->next);
	if (!laser->prev)
		player->lasers  = laser->next;
	laser->coord.x = 0;
	laser->coord.y = 0;
	laser->next = NULL;
	laser->prev = NULL;
	free(laser);
}