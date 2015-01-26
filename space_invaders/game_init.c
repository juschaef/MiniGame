#include <space_invader.h>
#include <stdlib.h>

t_game	*game_init()
{
	t_game *game;

	game = (t_game *)malloc(sizeof(t_game));
	game->mapW = 60;
	game->mapH = 30;
	game->map = map_init(game->mapH, game->mapW);
	game->score = 0;
	game->player = player_init();
	game->boss = boss_init();
	return (game);
}