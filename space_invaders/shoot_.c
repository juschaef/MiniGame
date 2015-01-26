#include <space_invader.h>
#include <stdio.h>

static void process_shoot(t_game *game)
{
	t_coords *laser;

	laser = create_laser(game->player->coord.x);
	laser_push(game->player, laser);
}


void	shoot_(t_game *game, int key)
{
	static int count = 0;

	if (count >= 25 && key == 3)
	{
		process_shoot(game);
		count = 0;
	}
	count++;
}