#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness.h"

extern "C"
{
    #include "production/production.h"
}

TEST_GROUP(LinkTimeSubstitution) {};

TEST(LinkTimeSubstitution, fooTest)
{
    LONGS_EQUAL(111, foo());
}

TEST(LinkTimeSubstitution, barTest)
{
    LONGS_EQUAL(0, bar());
}

int main(int ac, char** av)
{
	return CommandLineTestRunner::RunAllTests(ac, av);
}

