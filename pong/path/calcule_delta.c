#include <main.h>
#include <math.h>

void	calcule_delta(t_pong *pong)
{
	if (pong->recalc)
	{
		pong->recalc = 0;
		pong->bres.dx = abs(pong->b_dest.x - pong->b_orig.x);
		pong->bres.sx = pong->b_orig.x < pong->b_dest.x ? 1 : -1;
		pong->bres.dy = abs(pong->b_dest.y - pong->b_orig.y);
		pong->bres.sy = pong->b_orig.y < pong->b_dest.y ? 1 : -1;
		pong->bres.err = (pong->bres.dx > pong->bres.dy) ? pong->bres.dx : -(pong->bres.dy) / 2;
	}
}
