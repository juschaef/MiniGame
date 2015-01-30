#include <project.h>

static void test00(t_test *test)
{
	t_player *player;

	player = player_new();
	mt_assert(player->score == 0);
	free(player);
}

static void test01(t_test *test)
{
	t_player *player;

	player = player_new();
	mt_assert(player->lasers == NULL);
	free(player);
}

static void test02(t_test *test)
{
	t_player *player;

	player = player_new();
	mt_assert(player->coord.x == 3);
	free(player);
}

static void test03(t_test *test)
{
	t_player *player;

	player = player_new();
	mt_assert(player->coord.y == 25);
	free(player);
}


void	suite_00_player_init(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test00);
	SUITE_ADD_TEST(suite, test01);
	SUITE_ADD_TEST(suite, test02);
	SUITE_ADD_TEST(suite, test03);
}
