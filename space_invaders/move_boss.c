#include <space_invader.h>


static int check_dir(int x, int width)
{
	if (x >= width - 3)
		return (-1);
	else if (x <= 3)
		return (1);
	else
		return (0);
}

static int process_move(int dir, int x)
{
	if (dir == 1)
		x++;
	else if (dir == -1)
		x--;
	return (x);
}

void	move_boss(t_game *game)
{
	static int count;
	static int dir = 1;

	if (count >= 25)
	{
		clear_boss(game);
		game->boss->coord.x = process_move(dir, game->boss->coord.x);
		if (check_dir(game->boss->coord.x, game->mapW))
			dir = check_dir(game->boss->coord.x, game->mapW);
		count = 0;
	}
	else
		count++;
}