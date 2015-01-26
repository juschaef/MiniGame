#include <space_invader.h>
#include <stdlib.h>

static int checks_destroy(t_coords *coord)
{
	if (coord->coord.y == 0)
		return (1);
	return (0);
}

static void iter_laser_roof_collide(t_player *player)
{
	t_coords *tmp;
	t_coords *next;

	tmp = player->lasers;
	while(tmp)
	{
		next = tmp->next;
		if (checks_destroy(tmp))
			del_laser(player, tmp);
		tmp = next;
	}
}

void	check_roof(t_game *game)
{
	iter_laser_roof_collide(game->player);
}
