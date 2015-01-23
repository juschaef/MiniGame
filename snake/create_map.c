#include <main.h>
#include <stdlib.h>

char **create_map()
{
	char **map;
	int i;
	int j;

	map = (char **)malloc(sizeof(char *) * (40 + 1));
	j = 0;
	while (j < 41)
	{
		map[j] = (char *)malloc(sizeof(char) * (40 + 1));
		i = 0;
		while (i < 41)
		{
			if (j == 0 || j == 40 || i == 0 || i == 40)
				map[j][i] = '#';
			else
				map[j][i] = ' ';
			i++;
		}
		map[j][i] = 0;
		j++;
	}
	map[j] = NULL;
	return (map);
}