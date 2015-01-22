#include <main.h>

t_pong  *pong_init(void)
{
	t_pong *pong;

	pong = (t_pong *)malloc(sizeof(t_pong));
	pong->p1_pos.x = 4;
	pong->p1_pos.y = 9;
	pong->p2_pos.x = 56;
	pong->p2_pos.y = 9;
	pong->b_orig.x = 30;
	pong->b_save.x = pong->b_orig.x + 50;
	pong->b_save.y = pong->b_orig.y + 50;
	pong->b_orig.y = 3;
	pong->b_dest.x = 0;
	pong->b_dest.y = 0;
	pong->recalc = 1;
	pong->score1 = 5;
	pong->score2 = 5;
	return (pong);
}
