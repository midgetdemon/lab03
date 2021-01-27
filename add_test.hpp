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

#endif
