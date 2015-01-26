#include <space_invader.h>
#include <stdlib.h>

t_boss *boss_init()
{
	t_boss *boss;

	boss = (t_boss *)malloc(sizeof(t_boss));
	boss->coord.x = 29;
	boss->coord.y = 1;
	return (boss);
}