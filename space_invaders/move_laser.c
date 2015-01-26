#include <space_invader.h>

void	iter_laser_movement(t_player *player, char **map)
{
	t_coords *tmp;
	t_coords *next;

	tmp = player->lasers;
	while (tmp)
	{
		next = tmp->next;
		map[tmp->coord.y][tmp->coord.x] = ' ';
		tmp->coord.y--;
		tmp = next;
	}
}

void	move_laser(t_game *game)
{
	static int count = 0;

	if (count >= 20)
	{
		iter_laser_movement(game->player, game->map);
		count = 0;
	}
	count++;
}