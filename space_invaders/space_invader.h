#ifndef __SPACE_INVADER_H__
# define __SPACE_INVADER_H__

typedef struct s_coords t_coords;
typedef struct s_boss t_boss;

typedef struct	s_coord
{
	int			x;
	int			y;
}				t_coord;

typedef struct	s_coords
{
	t_coord		coord;
	t_coords	*next;
	t_coords	*prev;
}				t_coords;

typedef struct	s_player 
{
	t_coord		coord;
	t_coords	*lasers;
}				t_player;

typedef struct	s_boss
{
	t_coord		coord;
}				t_boss;

typedef struct	s_game 
{
	char		**map;
	int			mapW;
	int			mapH;
	int			score;
	t_player	*player;
	t_boss		*boss;
}				t_game;

void		_game();
t_game		*game_init();
char 		**map_init(int heigth, int width);
t_boss		*boss_init();
t_player 	*player_init();
void		print_game(t_game *game);
void 		loop_(t_game* game);
int			getarrowkey(void);
void		place_player(t_game *game);
void		place_opp(t_game *game);
void		move_player(t_game *game, int key);
void		move_boss(t_game *game);	
void		place_boss(t_game *game);
void		shoot_(t_game *game, int key);
t_coords 	*create_laser(int x);
void		laser_push(t_player *player, t_coords *laser);
void		laser_link(t_coords *laser1, t_coords *laser2);
void		place_laser(t_game *game);
void		move_laser(t_game *game);
void		handle_collider(t_game *game);
void 		del_laser(t_player *player, t_coords *coord);
void		check_roof(t_game *game);
void		check_boss(t_game *game);
void		win(t_game *game);
void		clear_boss(t_game *game);

#endif