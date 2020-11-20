#ifndef __MULT_TEST_HPP
#define __MULT_TEST_HPP

#include "gtest/gtest.h"
#include "op.hpp"
#include "mult.hpp"

TEST(mulTest, multEvaluateTwoFive) {
   Base* left = new Op(2);
   Base* right = new Op(5);
   Mult* test = new Mult(left, right);
   EXPECT_EQ(test->evaluate(), 10.0);
}

TEST(multTest, multEvaluateOperator) {
   Base* left = new Op(2);
   Base* three = new Op(3);
   Base* seven = new Op(7);
   Base* right = new Add(three, seven);
   Mult* test = new Mult(left, right);
   EXPECT_EQ(test->evaluate(), 20.0);
}

TEST(multTest, multEvaluateZero) {
   Base* zero = new Op(0);
   Base* two = new Op(2);
   Mult* test = new Mult(zero, two);
   EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(multTest, multEvaluateNeg) {
   Base* neg = new Op(-1);
   Base* two = new Op(2);
   Mult* test = new Mult(neg, two);
   EXPECT_EQ(test->evaluate(), -2.0);
}

TEST(multTest, multEvaluateDec) {
   Base* one = new Op(1);
   Base* dec = new Op(3.14);
   Mult* test = new Mult(one, dec);
   EXPECT_EQ(test->evaluate(), 3.14);
}


#endif //__MULT_TEST_HPP
