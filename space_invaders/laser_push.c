#include <space_invader.h>

void	laser_push(t_player *player, t_coords *laser)
{
	t_coords *tmp;

	if (!player->lasers)
		player->lasers = laser;
	else
	{
		tmp = player->lasers;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = laser;
		laser_link(tmp, tmp->next);
	}
}