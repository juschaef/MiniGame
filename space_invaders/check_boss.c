#include <space_invader.h>
#include <stdlib.h>

static void	del_boss(t_game *game)
{
	clear_boss(game);
	free(game->boss);
	game->boss = NULL;
}

static int checks_collide_boss(t_coords *laser, t_boss *boss)
{
	int boss_x ;
	int laser_x ;

	boss_x = boss->coord.x;
	laser_x = laser->coord.x;
	if (laser->coord.y == boss->coord.y)
	{
		if (laser_x == boss_x || laser_x == boss_x + 1 || laser_x == boss_x - 1)
			return (1);
	}
	return (0);
}

static void iter_laser_boss_collide(t_game *game)
{
	t_coords *tmp;
	t_coords *next;

	tmp = game->player->lasers;
	while(tmp)
	{
		next = tmp->next;
		if (checks_collide_boss(tmp, game->boss))
		{
			del_laser(game->player, tmp);
			del_boss(game);
			win(game);
		}
		tmp = next;
	}
}


void	check_boss(t_game *game)
{
	iter_laser_boss_collide(game);
}