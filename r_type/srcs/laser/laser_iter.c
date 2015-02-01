#include <r_type.h>

void	laser_iter(t_player *player, void f(t_coords *, void *), void *context)
{
	t_coords *tmp;

	tmp = player->lasers;
	while (tmp)
	{
		f(tmp, context);
		tmp = tmp->next;
	}
}