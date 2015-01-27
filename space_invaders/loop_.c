#include <space_invader.h>
#include <unistd.h>

void loop_(t_game* game)
{
	int key;

	while (1)
	{
		key = getarrowkey();
		shoot_(game, key);
		move_player(game, key);
		move_boss(game);
		move_laser(game);
		handle_collider(game);
		place_player(game);
		place_boss(game);
		place_laser(game);
		place_bads(game);
		print_game(game);
		usleep(10000);
	}

}

