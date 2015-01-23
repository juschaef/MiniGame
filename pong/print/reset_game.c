#include <main.h>
#include <unistd.h>

static void countdown(t_pong *pong)
{
	pong->map[4][30] = '3';
	print_map(pong);
	sleep(1);
	pong->map[4][30] = '2';
	print_map(pong);
	sleep(1);
	pong->map[4][30] = '1';
	print_map(pong);
	pong->map[4][30] = ' ';
	sleep(1);
}

static void	endGame(t_pong *pong)
{
	pong->map[4][22] = 'P';
	pong->map[4][23] = 'L';
	pong->map[4][24] = 'A';
	pong->map[4][25] = 'Y';
	pong->map[4][26] = 'E';
	pong->map[4][27] = 'R';
	pong->map[4][29] = pong->score1 ? '1' : '2';
	pong->map[4][31] = 'W';
	pong->map[4][32] = 'I';
	pong->map[4][33] = 'N';
	print_map(pong);
	exit(0);
}

void	reset_game(t_pong *pong)
{
	if (pong->score1 == 0 || pong->score2 == 0)
		endGame(pong);
	pong->map[pong->b_orig.y][pong->b_orig.x] = ' ';
	pong->b_dest.y = 0;
	pong->b_dest.y = 0;
	pong->b_orig.x = 30;
	pong->b_orig.y = 3;
	put_ball(pong);
	countdown(pong);
}
