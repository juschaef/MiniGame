#include <space_invader.h>
#include <stdlib.h>

void del_laser(t_player *player, t_coords *coord)
{
	laser_link(coord->prev, coord->next);
	if (!coord->prev)
		player->lasers = coord->next;
	coord->prev = NULL;
	coord->next = NULL;
	free(coord);
}
