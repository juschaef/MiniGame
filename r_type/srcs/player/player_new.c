#include <r_type.h>
#include <stdlib.h>

t_player	*player_new()
{
	t_player	*player;

	player = (t_player *)malloc(sizeof(t_player));
	player->coord.x = 3;
	player->coord.y = 25;
	player->lasers = NULL;
	player->score = 0;
	return (player);
}