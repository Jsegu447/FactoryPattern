#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "div.hpp"

TEST(DivTest, DivWithDiv) {
    Op* test1 = new Op(8);
    Op* test2 = new Op(2);
    Div* insideTest = new Div(test1,test2);
    Div* testend = new Div(test1,insideTest);
    EXPECT_EQ(testend->evaluate(),2.000000);
}

TEST(DivTest, DivOnlyOp) {
    Op* test1 = new Op(8);
    Op* test2 = new Op(2);
    Div* testend = new Div(test1,test2);
    EXPECT_EQ(testend->evaluate(),4);
     EXPECT_EQ(testend->stringify(),"8.000000 / 2.000000");
}

TEST(DivTest, DivWith0) {
    Op* test1 = new Op(0);
    Op* test2 = new Op(2);
    Div* testend = new Div(test1,test2);
    EXPECT_EQ(testend->evaluate(),0);
     EXPECT_EQ(testend->stringify(),"0.000000 / 2.000000");
}



#endif //__DIV_TEST_HPP__


