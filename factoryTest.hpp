#ifndef _FACTORYTEST__
#define _FACOTRYTEST__
#include "gtest/gtest.h"
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

TEST(FactoryTest, SubTest){
   char* test[] = {"./calculator", "4", "-", "2"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
   EXPECT_EQ(factoryTest->evaluate(), 2);
}

TEST(FactoryTest, DivTest){
   char* test[] = {"./calculator", "4", "/", "2"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
   EXPECT_EQ(factoryTest->evaluate(), 2);
}

TEST(FactoryTest, randTest){
   char* test[] = {"./calculator", "%", "-", "%" };
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
   EXPECT_TRUE(factoryTest != nullptr);
}

TEST(FactoryTest, 2InputErrorHandle){
   char* test[] = {"./calculator", "4", "-"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 3);
   EXPECT_TRUE(factoryTest == nullptr);
}

TEST(FactoryTest, 2OperatorsErrorHandle){
   char* test[] = {"./calculator", "4", "+", "+"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
   EXPECT_TRUE(factoryTest == nullptr);
}



#endif //_FACTORYTEST__
