#include <main.h>
#include <stdio.h>

void	put_ball(t_pong *pong)
{
	pong->map[pong->b_orig.y][pong->b_orig.x] = 'o';
}
