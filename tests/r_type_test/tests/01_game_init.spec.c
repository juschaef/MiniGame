#include <project.h>

static void test00(t_test *test)
{
	t_game *game;

	game = game_new();
	mt_assert(game->statement == run);
	free(game->player);
	free(game);
}

static void test01(t_test *test)
{
	t_game *game;

	game = game_new();
	mt_assert(game->player->score == 0);
	free(game->player);
	free(game);
}

static void test02(t_test *test)
{
	t_game *game;

	game = game_new();
	mt_assert(game->opponent == NULL);
	free(game->player);
	free(game);
}

void	suite_01_game_init(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test00);
	SUITE_ADD_TEST(suite, test01);
	SUITE_ADD_TEST(suite, test02);
}

