#include <r_type.h>
#include <pthread.h>
#include <unistd.h>

void	*task_a(void * game_)
{
	t_game *game;

	game = game_;
	(void)game;
	return (NULL);
}

void	game_event_handler(t_game *game)
{
	static unsigned int count = 0;
	pthread_t ta;

	player_laser_move(game->player);
	count++;
	if (count == 200)
		pthread_create (&ta, NULL, task_a, game);
}