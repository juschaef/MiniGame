#include <project.h>

static void simple_test(t_test *test)
{
	mt_assert(0);
}


void	suite_00_map_init(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_test);
}
