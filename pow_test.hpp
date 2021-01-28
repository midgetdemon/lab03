#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"
#include "add.hpp"
#include "div.hpp"
#include "rand.hpp"
#include "mult.hpp"
#include "op.hpp"

TEST (PowTest, SimpleTest){
	Op * first = new Op(2);
	Op * second = new Op(3);
	Pow * test = new Pow(first, second);
	EXPECT_EQ(test->evaluate(), 8);
	EXPECT_EQ(test->stringify(), "(2.000000**3.000000)");
}

TEST(PowTest, NegativePow){
	Op * first = new Op (4);
	Op * second = new Op (-1);
	Pow * test = new Pow(first, second);
	EXPECT_EQ(test->evaluate(), 0.25);
	EXPECT_EQ(test->stringify(), "(4.000000**-1.000000)");
}

TEST(PowTest, PowExpression){
	Op * first = new Op (3);
	Op * second = new Op (4);
	Op * third = new Op (2);
	Op * fourth = new Op (1);
	Add * p1 = new Add(first, second);
	Div * p2 = new Div(third, fourth);
	Pow * test = new Pow(p1, p2);
	EXPECT_EQ(test->evaluate(), 49);
	EXPECT_EQ(test->stringify(), "((3.000000+4.000000)**(2.000000/1.000000))");
}

TEST(PowTest, PowRand){
	Rand * num = new Rand();
	Op * second = new Op (2);
	Pow * test = new Pow (num, second);
	Mult * multiply = new Mult(num, num);	
	EXPECT_EQ(test->evaluate(), multiply->evaluate());
	EXPECT_EQ(test->stringify(), "(" + num->stringify() + "**2.000000)");
}
#endif
