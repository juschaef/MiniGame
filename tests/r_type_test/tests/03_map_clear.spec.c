#include <project.h>

static void test00(t_test *test)
{
	t_game *game;

	game = game_new();
	game->map[1][1] = 'X';
	game_map_clear(game);
	mt_assert(game->map[1][1] == ' ');
	free(game->player);
	free(game->map);
	free(game);
}

static void test01(t_test *test)
{
	t_game *game;

	game = game_new();
	game->map[12][18] = 'X';
	game_map_clear(game);
	mt_assert(game->map[12][18] == ' ');
	free(game->player);
	free(game->map);
	free(game);
}

void	suite_03_map_clear(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test00);
	SUITE_ADD_TEST(suite, test01);
}

