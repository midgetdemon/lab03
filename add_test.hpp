#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "op.hpp"

TEST(AddTest, AddEvaluateOpsPosPos){
	Op* one = new Op(4);
	Op* two = new Op(7);
	Add* test = new Add(one, two);
	EXPECT_EQ(test->evaluate(), 11);
}

TEST(AddTest, AddEvaluateOpsZeroZerp){
	Op* one = new Op(0);
	Op* two = new Op(0);
	Add* test = new Add(one, two);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(AddTest, AddEvaluateOpsNegPos){
	Op* one = new Op(-5);
	Op* two = new Op(3);
	Add* test = new Add(one, two);
	EXPECT_EQ(test->evaluate(), -2);
}

TEST(AddTest, AddEvaluateOpsNegNeg){
	Op* one = new Op(-4);
	Op* two = new Op(-2);
	Add* test = new Add(one, two);
	EXPECT_EQ(test->evaluate(), -6);
}

TEST(AddTest, AddStringOpsPosPos){
	Op* one = new Op(4);
	Op* two = new Op(7);
	Add* test = new Add(one, two);
	EXPECT_EQ(test->stringify(), "(4.000000+7.000000)");
}

TEST(AddTest, AddStringOpsNegPos){
	Op* one = new Op(-5);
	Op* two = new Op(3);
	Add* test = new Add(one, two);
	EXPECT_EQ(test->stringify(), "(-5.000000+3.000000)");
}

#endif
