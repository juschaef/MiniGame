#include <r_type.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	game_print(t_game *game)
{
	char **map;

	map = game->map;
	system("clear");
	while (*map)
	{
		write(1, *map, 101);
		write(1, "\n", 1);
		map++;
	}
	printf("%44c Score : %d\n",' ', game->player->score);
}