#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "add.hpp"
#include "mult.hpp"

TEST(addTest, addEvaluateThreeSeven) {
    Base* left = new Op(3);
    Base* right = new Op(7);
    Add* test = new Add(left,right);
    EXPECT_EQ(test->evaluate(), 10.0);
}

TEST(addTest, addEvaluateDec) {
    Base* left = new Op(3.5);
    Base* right = new Op(7.2);
    Add* test = new Add(left,right);
    EXPECT_EQ(test->evaluate(), 10.7);
}

TEST(addTest, addEvaluateNeg) {
    Base* left = new Op(10);
    Base* right = new Op(-5);
    Add* test = new Add(left,right);
    EXPECT_EQ(test->evaluate(), 5.0);
}

TEST(addTest, addEvaluateOperator) {
    Base* left = new Op(3);
    Base* one = new Op(1);
    Base* two = new Op(2);
    Base* right = new Mult(one,two);
    Add* test = new Add(left,right);
    EXPECT_EQ(test->evaluate(), 5.0);
}

#endif //__ADD_TEST_HPP__
