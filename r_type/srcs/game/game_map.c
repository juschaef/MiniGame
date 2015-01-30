#include <r_type.h>
#include <stdlib.h>

char	**game_map()
{
	int		y;
	int 	x;
	char	**map;

	map = (char **)malloc(sizeof(char *) * 31);
	y = 0;
	while (y < 31)
	{
		map[y] = (char *)malloc(sizeof(char) * 101);
		x = 0;
		while (x < 101)
		{
			if (y == 0 || x == 0 || y == 30 || x == 100)
				map[y][x] = '#';
			else
				map[y][x] = ' ';
			x++;
		}
		map[y][x] = 0;
		y++;
	}
	map[y] = 0;
	return (map);
}

