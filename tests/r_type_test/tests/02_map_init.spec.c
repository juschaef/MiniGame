#include <project.h>

static void test00(t_test *test)
{
	char **map;

	map = game_map();
	mt_assert(map[0][0] == '#');
	free(map);
}

static void test01(t_test *test)
{
	char **map;

	map = game_map();
	mt_assert(map[1][0] == '#');
	free(map);
}

static void test02(t_test *test)
{
	char **map;

	map = game_map();
	mt_assert(map[1][1] == ' ');
	free(map);
}

void	suite_02_map_init(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test00);
	SUITE_ADD_TEST(suite, test01);
	SUITE_ADD_TEST(suite, test02);
}

