#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness.h"

extern "C"
{
    #include "bar.h"
    #include "foo.h"
}

TEST_GROUP(LinkTimeSubstitution) {};

TEST(LinkTimeSubstitution, foofooTest)
{
    LONGS_EQUAL(111, foo());
}

TEST(LinkTimeSubstitution, fooblaTest)
{
    LONGS_EQUAL(222, bla());
}

TEST(LinkTimeSubstitution, barTest)
{
    LONGS_EQUAL(0, bar());
}

int main(int ac, char** av)
{
	return CommandLineTestRunner::RunAllTests(ac, av);
}

