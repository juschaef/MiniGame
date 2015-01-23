#ifndef __MAIN_H__
# define __MAIN_H__

typedef struct	s_coord
{
	int			x;
	int			y;	
}				t_coord;

typedef struct		s_tail
{
	t_coord			coord;
	struct s_tail	*next;	
}					t_tail;

typedef struct	s_snake
{
	char		**map;
	t_coord		head;
	int			dirx;
	int			diry;
	int			size;
	t_tail		*body;
	t_coord		apple;
	int			apple_here;
	int			score;
}				t_snake;

t_snake			*snake_init();
char			**create_map();
void			print_map(t_snake *snake);
void			loop(t_snake *snake);
int				getarrowkey(void);
void			put_snake(t_snake *snake);
void			get_direction(t_snake *snake, int key);
void			move_snake(t_snake *snake);
void			put_apple(t_snake *snake);
void			erase_snake(t_snake *snake);
void			check_fail(t_snake *snake);
void			check_apple(t_snake *snake);
void			game_over(t_snake *snake);
t_tail			*create_tail(t_snake *snake);
int	tail_len(t_snake *snake);

#endif