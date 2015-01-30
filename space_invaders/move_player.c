#include <space_invader.h>

static void	check_wall(t_game *game)
{
	if (game->player->coord.x == 1)
		game->player->coord.x = 2;
	else if (game->player->coord.x == game->mapW - 2)
		game->player->coord.x = game->mapW - 3; 
}

static void	clear_player(t_game *game)
{
	t_coord coord;

	coord = game->player->coord;
	game->map[coord.y][coord.x] = ' ';
	game->map[coord.y - 1][coord.x] = ' ';
	game->map[coord.y][coord.x + 1] = ' ';
	game->map[coord.y][coord.x - 1] = ' ';
}




void	move_player(t_game *game, int key)
{
	clear_player(game);
	if (key == 1)
		game->player->coord.x++;
	else if (key == 2)
		game->player->coord.x--;
	check_wall(game);
}