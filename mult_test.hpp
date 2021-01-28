#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "mult.hpp"
#include "op.hpp"
#include "sub.hpp"

TEST(MultTest, MultEvaluateOpsPosPos){
	Op* one = new Op(2);
	Op* two = new Op(4);
	Mult* test = new Mult(one, two);
	EXPECT_EQ(test->evaluate(), 8);
}

TEST(MultTest, MultEvaluateOpsZeroZero){
	Op* one = new Op(0);
	Op* two = new Op(0);
	Mult* test = new Mult(one, two);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultEvaluateOpsNegPos){
	Op* one = new Op(-3);
	Op* two = new Op(3);
	Mult* test = new Mult(one, two);
	EXPECT_EQ(test->evaluate(), -9);
}

TEST(MultTest, MultEvaluateOpsNegNeg){
	Op* one = new Op(-2);
	Op* two = new Op(-5);
	Mult* test = new Mult(one, two);
	EXPECT_EQ(test->evaluate(), 10);
}

TEST(MultTest, MultEvaluateSub){
	Op* one = new Op(4);
	Op* subone = new Op(5);
	Op* subtwo = new Op(8);
	Sub* two = new Sub(subone, subtwo);
	Mult* test = new Mult(one, two);
	EXPECT_EQ(test->evaluate(), -12);
}

TEST(MultTest, MultStringOpsPosPos){
	Op* one = new Op(2);
	Op* two = new Op(4);
	Mult* test = new Mult(one, two);
	EXPECT_EQ(test->stringify(), "(2.000000*4.000000)");
}

TEST(MultTest, MultStringOpsNegPos){
	Op* one = new Op(-3);
	Op* two = new Op(3);
	Mult* test = new Mult(one, two);
	EXPECT_EQ(test->stringify(), "(-3.000000*3.000000)");
}

#endif
