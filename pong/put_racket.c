#include <main.h>

static void	place_player(char **map, int x, int y)
{
	map[y][x] = '|';
	map[y - 1][x] = '|';
	map[y + 1][x] = '|';
}


static void	move_racket(t_pong *pong, int key)
{
	switch (key) 
	{
		case 1:
			pong->p1_pos.y--;
			break;
		case 2:
			pong->p2_pos.y--;
			break;
		case 3:
			pong->p2_pos.y++;
			break;
		case 4:
			pong->p1_pos.y++;
			break;
		default:
			break;
	}
}

static void	place_racket(t_pong *pong)
{
	int x;
	int y;
	x = pong->p1_pos.x;
	y = pong->p1_pos.y;
	place_player(pong->map, x, y);
	x = pong->p2_pos.x;
	y = pong->p2_pos.y;
	place_player(pong->map, x, y);
}

void	error_racket(t_pong *pong)
{
	if (pong->p1_pos.y == 1)
		pong->p1_pos.y++;
	else if (pong->p1_pos.y == 19)
		pong->p1_pos.y--;
	else if (pong->p2_pos.y == 1)
		pong->p2_pos.y++;
	else if (pong->p2_pos.y == 19)
		pong->p2_pos.y--;
}

static void	clear_racket(t_pong *pong)
{
	pong->map[pong->p1_pos.y][pong->p1_pos.x] = ' ';
	pong->map[pong->p1_pos.y - 1][pong->p1_pos.x] = ' ';
	pong->map[pong->p1_pos.y + 1][pong->p1_pos.x] = ' ';
	pong->map[pong->p2_pos.y][pong->p2_pos.x] = ' ';
	pong->map[pong->p2_pos.y - 1][pong->p2_pos.x] = ' ';
	pong->map[pong->p2_pos.y + 1][pong->p2_pos.x] = ' ';
}

void	put_racket(t_pong *pong, int key)
{
	clear_racket(pong);
	move_racket(pong, key);
	error_racket(pong);
	place_racket(pong);
}