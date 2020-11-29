#ifndef _FACTORYTEST__
#define _FACOTRYTEST__
#include "gtest/gtest.h"
#include "base.hpp"
#include"op.hpp"
#include "sub.hpp"
#include "add.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "rand.hpp"
#include "pow.hpp"
#include "expFactory.hpp"

TEST(FactoryTest, AddTest){
   char* test[] = {"./calculator", "3", "+", "5"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test,4);
   EXPECT_EQ(factoryTest->evaluate(), 8);
}

TEST(FactoryTest, MultTest){
   char* test[] = {"./calculator", "4", "*", "5"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
   EXPECT_EQ(factoryTest->evaluate(), 20);
}

TEST(FactoryTest, bigSizeTest){
   char* test[] = {"./calculator", "2", "+", "3", "*", "4"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 6);
   EXPECT_EQ(factoryTest->evaluate(), 20);
}

#endif //_FACTORYTEST__
