#include <project.h>

static void test00(t_test *test)
{
	t_player *player;

	player = player_new();
	player_move(player, 1);
	mt_assert(player->coord.y == 26);
	free(player);
}

static void test01(t_test *test)
{
	t_player *player;

	player = player_new();
	player_move(player, 2);
	mt_assert(player->coord.y == 24);
	free(player);
}

static void test02(t_test *test)
{
	t_player *player;

	player = player_new();
	player_move(player, 4);
	mt_assert(player->coord.y == 25);
	free(player);
}

static void test03(t_test *test)
{
	t_player *player;

	player = player_new();
	player->coord.y = 30;
	player_move(player, 2);
	mt_assert(player->coord.y == 30);
	free(player);
}

static void test04(t_test *test)
{
	t_player *player;

	player = player_new();
	player->coord.y = 0;
	player_move(player, 1);
	mt_assert(player->coord.y == 0);
	free(player);
}

void	suite_04_player_move(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test00);
	SUITE_ADD_TEST(suite, test01);
	SUITE_ADD_TEST(suite, test02);
	SUITE_ADD_TEST(suite, test03);
	SUITE_ADD_TEST(suite, test04);
}

