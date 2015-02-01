#include <r_type.h>

void	game_put(t_game *game)
{
	game_player_put(game);
	game_laser_put(game);
}