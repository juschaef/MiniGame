#ifndef __SPACE_INVADER_H__
# define __SPACE_INVADER_H__

typedef struct s_coords t_coords;
typedef struct s_opponent t_opponent;

typedef struct	s_coord
{
	int			x;
	int			y;
}				t_coord;

typedef struct	s_coords
{
	t_coord		coord;
	t_coords	*next;	
}				t_coords;

typedef struct	s_player 
{
	t_coord		coord;
	t_coords	*lasers;
}				t_player;

typedef struct	s_opponent
{
	t_coord		coord;
	t_opponent	*next;
}				t_opponent;

typedef struct	s_game 
{
	char		**map;
	int			mapW;
	int			mapH;
	t_player	*player;
	t_opponent	*opponents;
}				t_game;

#endif