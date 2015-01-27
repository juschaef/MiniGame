#include <space_invader.h>

void	handle_collider(t_game *game)
{
	check_roof(game);
	check_boss(game);
	check_bads(game);
}