#ifndef __MAIN_H__
# define __MAIN_H__

# include <stdlib.h>

typedef struct	s_coord
{
	int 		x;
	int 		y;
}				t_coord;

typedef struct	t_vec
{
	int 		x;
	int 		y;	
}				t_vec;

typedef struct	s_bres
{
	int 		dx;
	int 		sx;
	int 		dy;
	int 		sy;
	int 		err;
}				t_bres;

typedef struct	s_pong
{
	char 		**map;
	t_coord		p1_pos;
	t_coord		p2_pos;
	t_coord		b_orig;
	t_coord		b_save;
	t_coord		b_dest;
	t_bres		bres;
	int			recalc;
	int			score1;
	int			score2;
}				t_pong;

t_pong 		*pong_init(void);
char		**create_map(void);
void		print_map(t_pong *pong);
int			getarrowkey(void);
void		loop(t_pong *pong);
void		put_racket(t_pong *pong, int key);
void		put_ball(t_pong *pong);
void		set_dest(t_pong *pong);
void		calcule_delta(t_pong *pong);
void		calcule_error(t_pong *pong);
void		reset_game(t_pong *pong);
void		clear_ball(t_pong *pong);

#endif