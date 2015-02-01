#include <r_type.h>
#include <stdlib.h>

t_coords *laser_new(int y)
{
	t_coords *laser;

	laser = (t_coords *)malloc(sizeof(t_coords));
	laser->coord.x = 4;
	laser->coord.y = y;
	laser->next = NULL;
	laser->prev = NULL;
	return (laser);
}