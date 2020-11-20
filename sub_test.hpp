#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "sub.hpp"

TEST(SubTest, SubEvaluateNonZero) {
    Op* test1 = new Op(8);
    Op* test2 = new Op(7);
    Sub* insideTest = new Sub(test1,test2);
    Sub* testend = new Sub(test2,insideTest);
    EXPECT_EQ(testend->evaluate(), 6);
    EXPECT_EQ(testend->stringify(),"7.000000 - 8.000000 - 7.000000");
}

TEST(SubTest, SubOp) {
    Op* test1 = new Op(8);
    Op* test2 = new Op(7);
    Sub* testend = new Sub(test1,test2);
    EXPECT_EQ(testend->evaluate(), 1);
    EXPECT_EQ(testend->stringify(),"8.000000 - 7.000000");
}

TEST(SubTest, SubOpZero) {
    Op* test1 = new Op(8);
    Sub* testend = new Sub(test1,test1);
    EXPECT_EQ(testend->evaluate(), 0);
    EXPECT_EQ(testend->stringify(),"8.000000 - 8.000000");
}



#endif //__SUB_TEST_HPP__

