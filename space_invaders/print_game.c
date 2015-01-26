#include <space_invader.h>
#include <stdio.h>
#include <stdlib.h>

void		print_game(t_game *game)
{
	int i;

	i = 0;
	system("clear");
	while (i < game->mapH)
	{
		printf("%s\n", game->map[i]);
		i++;
	}
	printf("Score : %d\n", game->score);
}