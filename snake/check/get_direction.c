#include <main.h>
#include <stdio.h>

void	get_direction(t_snake *snake, int key)
{
	if (key == 1 && snake->diry == 0)
	{
		snake->diry = -1;
		snake->dirx = 0;
	}
	else if (key == 2 && snake->diry == 0)
	{	
		snake->diry = 1;
		snake->dirx = 0;
	}
	else if (key == 3 && snake->dirx == 0)
	{	
		snake->dirx = -1;
		snake->diry = 0;
	}
	else if (key == 4 && snake->dirx == 0)
	{
		snake->dirx = 1;
		snake->diry = 0;
	}
}