#include <main.h>

void	calcule_error(t_pong *pong)
{
	int e2;

	e2 = pong->bres.err;
	if (e2 > -(pong->bres.dx))
	{
		pong->bres.err -= pong->bres.dy;
		pong->b_orig.x += pong->bres.sx;
	}
	if (e2 < pong->bres.dy)
	{
		pong->bres.err += pong->bres.dx;
		pong->b_orig.y += pong->bres.sy;
	}
}
