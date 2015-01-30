/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_type.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 10:12:06 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/30 22:32:12 by juschaef         ###   ########.fr       */
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
**	Player obj
*/

t_player	*player_new();
void		player_handling(t_player *player, int key);
void		player_move(t_player *player, int key);

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

/*
** Fonction de lib
*/

int			getarrowkey(void);

#endif