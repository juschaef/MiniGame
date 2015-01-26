#include <space_invader.h>
#include <stdlib.h>

t_player *player_init()
{
	t_player *player;

	player = (t_player *)malloc(sizeof(t_player));
	player->coord.x = 29;
	player->coord.y = 28;
	player->lasers = NULL;
	return (player);
}