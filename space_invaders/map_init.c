#include <space_invader.h>
#include <stdlib.h>


static void	*map_init2(int heigth, int width, int type_size)
{
	int i;
	void **map;

	map = malloc(sizeof(void *) * (heigth + 1));
	i = 0;
	while (i < heigth)
	{
		map[i] = malloc(type_size * (width + 1));
		i++;
	}
	map[i] = NULL;
	return (map);
}

char **map_init(int heigth, int width)
{
	int i;
	int j;
	char **map;

	map = map_init2(heigth, width, 1);
	j = 0;
	while (j < heigth)
	{
		i = 0;
		while (i < width)
		{
			if (j == 0 || j == heigth - 1 || i == 0 || i == width - 1)
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