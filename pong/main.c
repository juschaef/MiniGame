#include <main.h>

int main(void)
{
	t_pong *pong;

	pong = pong_init();
	pong->map = create_map();
	loop(pong);
	return (0);
}