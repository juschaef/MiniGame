#include <r_type.h>

void	player_laser_handler(t_player *player, int key)
{
	static int c = 0;


	if (key == 3 && c >= 10)
	{
		c = 0;
		player_shoot(player);
	}
	c++;
}