#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"

TEST(DivTest, DivPos){
	Op * first = new Op (6);
	Op * second = new Op (2);
	Div * test = new Div (first, second);
	EXPECT_EQ(test->evaluate(), 3);
	EXPECT_EQ(test->stringify(), "(6.000000/2.000000)");
}

TEST(DivTest, DivZero){
	Op  * first = new Op (0);
	Op * second = new Op (5);
	Div * test = new Div (first, second);
	EXPECT_EQ(test->evaluate(), 0);
	EXPECT_EQ(test->stringify(), "(0.000000/5.000000)");
}

TEST(DivTest, DivEvaluateNegative){
	Op * first = new Op(-5);
	Op * second = new Op(5);
	Div * test = new Div (first, second);
	EXPECT_EQ(test->evaluate(), -1);
	EXPECT_EQ(test->stringify(), "(-5.000000/5.000000)");
}

TEST(DivTest, DivEvaluateRand){
	Rand * first = new Rand();
	Div * test = new Div(first, first);
	EXPECT_EQ(test->evaluate(), 1);
	EXPECT_EQ(test->stringify(), "(" + first->stringify() + "/" + first->stringify() + ")"); 
}

TEST(DivTest, DivDivideZero1){
	Op* one = new Op(5);
	Op* two = new Op(0);
	EXPECT_THROW(Div(one, two), std::invalid_argument);
}

TEST(DivTest, DivDivideZero2){
	Op* one = new Op(3);
	Op* addone = new Op(3);
	Op* addtwo = new Op(-3);
	Add* two = new Add(addone, addtwo);
	EXPECT_THROW(Div(one, two), std::invalid_argument);
}

#endif 

 
