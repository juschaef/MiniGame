#include <r_type.h>

void	game_map_clear(t_game *game)
{
	char	**map;
	int		y;
	int		x;

	map = game->map;
	y = 1;
	while (y < 30)
	{
		x = 1;
		while (x < 100)
		{
			map[y][x] = ' ';
			x++;
		}
		y++;
	}
}