#include <main.h>
#include <unistd.h>

void	reset_game(t_pong *pong)
{
	pong->b_dest.x = 0;
	pong->b_dest.y = 0;
	pong->b_orig.x = 30;
	pong->b_orig.y = 3;
	sleep(3);
}
