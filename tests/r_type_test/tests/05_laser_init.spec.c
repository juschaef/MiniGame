#include <project.h>

static void test00(t_test *test)
{
	t_coords *laser;

	laser = laser_new(4);
	mt_assert(laser->coord.y == 4);
	free(laser);
}

static void test01(t_test *test)
{
	t_coords *laser;

	laser = laser_new(4);
	mt_assert(laser->coord.x == 4);
	free(laser);
}

static void test02(t_test *test)
{
	t_coords *laser;

	laser = laser_new(4);
	mt_assert(laser->next == NULL);
	free(laser);
}

void	suite_05_laser_init(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test00);
	SUITE_ADD_TEST(suite, test01);
	SUITE_ADD_TEST(suite, test02);
}

