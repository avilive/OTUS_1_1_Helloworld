#define BOOST_TEST_MODULE test_version

#include "lib.h"
#include "gtest/gtest.h"

TEST(General, TestVersion)
{
	
	EXPECT_TRUE(version()>0);
}

int main()
{
    return RUN_ALL_TESTS();
}