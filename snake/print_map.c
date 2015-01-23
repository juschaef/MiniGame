#include <main.h>
#include <stdio.h>
#include <stdlib.h>

void	print_map(t_snake *snake)
{
	int i;

	i = 0;
	system("clear");
	while (i < 41)
	{
		printf("%s\n", snake->map[i]);
		i++;
	}
	printf("SCORE : [%d] | %d\n", snake->score, tail_len(snake));
}