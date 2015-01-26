#include <project.h>

static void simple_test(t_test *test)
{
	char **map;

	map = map_init(4, 4);

	mt_assert(map[0][0] == '#');
	mt_assert(map[0][1] == '#');
	mt_assert(map[1][0] == '#');
	mt_assert(map[1][1] == ' ');
}

static void simple_test2(t_test *test)
{
	char **map;

	map = map_init(6, 3);

	mt_assert(map[0][0] == '#');
	mt_assert(map[1][1] == ' ');
	mt_assert(map[1][2] == '#');
	mt_assert(map[5][2] == '#');
}


void	suite_00_map_init(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_test);
	SUITE_ADD_TEST(suite, simple_test2);
}
