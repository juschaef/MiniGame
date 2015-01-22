#include <main.h>
#include <stdio.h>

void	print_map(t_pong *pong)
{
	int i = 0;
	while (i < 21)
	{
		printf("%s\n", pong->map[i]);
		i++;
	}
	printf("Player 1 : %d || Player 2 : %d\n", pong->score1, pong->score2);
}
