#include <space_invader.h>

void	laser_link(t_coords *laser1, t_coords *laser2)
{
	if (laser1)
		laser1->next = laser2;
	if (laser2)
		laser2->prev = laser1;
}