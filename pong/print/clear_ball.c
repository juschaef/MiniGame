#include <main.h>

void	clear_ball(t_pong *pong)
{
	pong->map[pong->b_orig.y][pong->b_orig.x] = ' ';
}