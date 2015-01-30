#include <r_type.h>
#include <stdlib.h>

t_game	*game_new()
{
	t_game *game;

	game = (t_game *)malloc(sizeof(t_game));
	game->map = game_map();
	game->statement = run;
	game->player = player_new();
	game->opponent = NULL;
	return (game);
}