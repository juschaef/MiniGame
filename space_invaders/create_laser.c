#include <space_invader.h>
#include <stdlib.h>

t_coords *create_laser(int x)
{
	t_coords *laser;

	laser = (t_coords *)malloc(sizeof(t_coords));
	laser->coord.x = x;
	laser->coord.y = 26;
	laser->next = NULL;
	return (laser);
}