/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_type.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 10:12:06 by juschaef          #+#    #+#             */
/*   Updated: 2015/02/01 16:37:06 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __R_TYPE_H__
# define __R_TYPE_H__

typedef	struct s_coords t_coords;


typedef enum	e_statement
{
	run,
	boss,
}				t_statement;

typedef struct	s_coord
{
	int			x;
	int			y;
}				t_coord;

typedef	struct	s_coords
{
	t_coord		coord;
	t_coords	*next;
	t_coords	*prev;
}				t_coords;

typedef struct	s_player
{
	t_coord		coord;
	t_coords	*lasers;
	int			score;
}				t_player;

typedef struct	s_game
{
	char		**map;
	t_player	*player;
	t_statement	statement;
	t_coords	*opponent;	
}				t_game;

/*
**	Global function
*/

void		r_type();

/*
** Laser obj
*/

t_coords	*laser_new(int y);
void		laser_link(t_coords *laser1, t_coords *laser2);
void		laser_push(t_player *player, t_coords *laser);
void		laser_iter(t_player *player, void f(t_coords *, void *), void *context);
void		laser_del(t_coords *laser, t_player *player);

/*
**	Player obj
*/

t_player	*player_new();
void		player_handling(t_player *player, int key);
void		player_move(t_player *player, int key);
void		player_shoot(t_player *player);
void		player_laser_handler(t_player *player, int key);
void		player_laser_move(t_player *player);

/*
**	Game obj
*/

t_game		*game_new();
char		**game_map();
void		game_launch(t_game *game);
void		game_print(t_game *game);
void		game_map_clear(t_game *game);
void		game_put(t_game *game);
void		game_player_put(t_game *game);
void		game_laser_put(t_game *game);
void		game_event_handler(t_game *game);


/*
** Fonction de lib
*/

int			getarrowkey(void);

#endif