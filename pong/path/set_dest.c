#include <main.h>
#include <time.h>

static void		random_dest(t_pong *pong)
{
	unsigned int seed;
	int dir;

	seed = time(NULL);
	dir = rand_r(&seed);
	if (dir % 2 == 0)
	{
		pong->b_dest.x = pong->b_orig.x + 50;
		pong->b_dest.y = pong->b_orig.y + 50;
	}
	else
	{
		pong->b_dest.x = pong->b_orig.x - 50;
		pong->b_dest.y = pong->b_orig.y + 50;	
	}
}

static void	touch_racket(t_pong *pong)
{
	if (pong->b_orig.x == 4)
	{
		if (pong->b_orig.y == pong->p1_pos.y)
		{
			pong->b_dest.x = pong->b_orig.x + 50;
			pong->b_dest.y = pong->bres.sx == -1 ? pong->b_orig.y - 50 : pong->b_orig.y + 50;
			pong->recalc = 1;
		}
		else if (pong->b_orig.y == pong->p1_pos.y + 1)
		{
			pong->b_dest.x = pong->b_orig.x + 50;
			pong->b_dest.y = pong->bres.sx == -1 ? pong->b_orig.y - 75 : pong->b_orig.y + 75;
			pong->recalc = 1;
		}
		else if (pong->b_orig.y == pong->p1_pos.y -1)
		{
			pong->b_dest.x = pong->b_orig.x + 50;
			pong->b_dest.y = pong->bres.sx == -1 ? pong->b_orig.y - 75 : pong->b_orig.y + 75;
			pong->recalc = 1;
		}
	}
	if (pong->b_orig.x == 56)
	{
		if (pong->b_orig.y == pong->p2_pos.y)
		{
			pong->b_dest.x = pong->b_orig.x - 50;
			pong->b_dest.y = pong->bres.sx == -1 ? pong->b_orig.y - 50 : pong->b_orig.y + 50;
			pong->recalc = 1;
		}
		else if (pong->b_orig.y == pong->p2_pos.y + 1)
		{
			pong->b_dest.x = pong->b_orig.x - 50;
			pong->b_dest.y = pong->bres.sx == -1 ? pong->b_orig.y - 75 : pong->b_orig.y + 75;
			pong->recalc = 1;
		}
		else if (pong->b_orig.y == pong->p2_pos.y -1)
		{
			pong->b_dest.x = pong->b_orig.x - 50;
			pong->b_dest.y = pong->bres.sx == -1 ? pong->b_orig.y - 75 : pong->b_orig.y + 75;
			pong->recalc = 1;
		}
	}
}

static void end_of_game(t_pong *pong)
{
	if (pong->b_orig.x == 1)
		pong->score1--;
	else
		pong->score2--;
	reset_game(pong);
}

void	set_dest(t_pong *pong)
{
	if (pong->b_dest.x == 0)
		random_dest(pong);
	else if (pong->b_orig.y == 1 )
	{
		pong->b_dest.y = pong->b_orig.y + 50;
		pong->b_dest.x = pong->bres.sx == -1 ? pong->b_orig.x - 50 : pong->b_orig.x + 50;
		pong->recalc = 1;
	}
	else if (pong->b_orig.y >=19)
	{
		pong->b_dest.y = pong->b_orig.y - 50;
		pong->b_dest.x = pong->bres.sx == -1 ? pong->b_orig.x - 50 : pong->b_orig.x + 50;
		pong->recalc = 1;
	}
	else if (pong->b_orig.x == 1 || pong->b_orig.x == 59)
	{
		end_of_game(pong);
	}
	touch_racket(pong);
}
