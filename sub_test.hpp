#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"
#include "op.hpp"
#include "div.hpp"

TEST(SubTest, SubEvaluateOpsPosPos){
	Op* one = new Op(4);
	Op* two = new Op(7);
	Sub* test = new Sub(one, two);
	EXPECT_EQ(test->evaluate(), -3);
}

TEST(SubTest, SubEvaluateOpsZeroZero){
	Op* one = new Op(0);
	Op* two = new Op(0);
	Sub* test = new Sub(one, two);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTest, SubEvaluateOpsNegPos){
	Op* one = new Op(-5);
	Op* two = new Op(3);
	Sub* test = new Sub(one, two);
	EXPECT_EQ(test->evaluate(), -8);
}

TEST(SubTest, SubEvaluateOpsNegNeg){
	Op* one = new Op(-4);
	Op* two = new Op(-2);
	Sub* test = new Sub(one, two);
	EXPECT_EQ(test->evaluate(), -2);
}

TEST(SubTest, SubEvaluateDiv){
	Op* divone = new Op(6);
	Op* divtwo = new Op(2);
	Div* one = new Div(divone, divtwo);
	Op* two = new Op(7);
	Sub* test = new Sub(one, two);
	EXPECT_EQ(test->evaluate(), -4);
}

TEST(SubTest, SubStringOpsPosPos){
	Op* one = new Op(4);
	Op* two = new Op(7);
	Sub* test = new Sub(one, two);
	EXPECT_EQ(test->stringify(), "(4.000000-7.000000)");
}

TEST(SubTest, SubStringOpsNegPos){
	Op* one = new Op(-5);
	Op* two = new Op(3);
	Sub* test = new Sub(one, two);
	EXPECT_EQ(test->stringify(), "(-5.000000-3.000000)");
}

#endif
