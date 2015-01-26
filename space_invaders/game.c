#include <space_invader.h>

void	_game()
{
	t_game *game;

	game = game_init();
	loop_(game);
}