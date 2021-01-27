#ifndef __RNAD_TEST_HPP__
#define _RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, EvaluateRand){
	Rand* test = new Rand();
	EXPECT_EQ(test->evaluate(), test->evaluate());
}

TEST(RandTest, StringRand){
	Rand* test = new Rand();
	EXPECT_EQ(test->stringify(), std::to_string(test->evaluate()));
}

#endif //__RAND_TEST_HPP__
