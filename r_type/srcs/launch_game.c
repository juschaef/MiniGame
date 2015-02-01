#include <r_type.h>
#include <unistd.h>
#include <stdio.h>

void	game_launch(t_game *game)
{
	int key;

	while (1)
	{
		key = getarrowkey();
		game_map_clear(game);
		game_event_handler(game);
		player_handling(game->player, key);
		game_put(game);
		game_print(game);
		usleep(38461);
	}
}