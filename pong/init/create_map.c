#include <main.h>

char **create_map(void)
{
	char **map;
	int i;
	int j;

	map = (char **)malloc(sizeof(char *) * (20 + 1));
	j = 0;
	while (j <= 20)
	{
		i = 0;
		map[j] = (char *)malloc(sizeof(char) * (60 + 1));
		while (i <= 60)
		{
			if (j == 0 || j == 20 || i == 0 || i == 60)
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