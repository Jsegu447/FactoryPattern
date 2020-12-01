#ifndef _FACTORYTEST__
#define _FACOTRYTEST__
#include "gtest/gtest.h"
#include "expFactory.hpp"
#include <iostream>

TEST(FactoryTest, AddTest){
   char* test[] = {"./calculator", "3", "+", "5"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test,4);
	std::cout << factoryTest->stringify() << std::endl;
   EXPECT_EQ(factoryTest->evaluate(), 8);
}

TEST(FactoryTest, MultTest){
   char* test[] = {"./calculator", "4", "*", "5"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
	std::cout << factoryTest->stringify() << std::endl;
   EXPECT_EQ(factoryTest->evaluate(), 20);
}

TEST(FactoryTest, bigSizeTest){
   char* test[] = {"./calculator", "2", "+", "3", "*", "4", "-", "5","/","3"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 10);
	std::cout << factoryTest->stringify() << std::endl;
   EXPECT_EQ(factoryTest->evaluate(), 5);
}

TEST(FactoryTest, SubTest){
   char* test[] = {"./calculator", "4", "-", "2"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
	std::cout << factoryTest->stringify() << std::endl;
   EXPECT_EQ(factoryTest->evaluate(), 2);
}

TEST(FactoryTest, DivTest){
   char* test[] = {"./calculator", "4", "/", "2"};
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
	std::cout << factoryTest->stringify() << std::endl;
   EXPECT_EQ(factoryTest->evaluate(), 2);
}

TEST(FactoryTest, randTest){
   char* test[] = {"./calculator", "%", "-", "%" };
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
	std::cout << factoryTest->stringify() << std::endl;
   EXPECT_TRUE(factoryTest != nullptr);
}


TEST(FactoryTest, powTest){
   char* test[] = {"./calculator", "2", "**", "3" };
   expFactory* fact = new expFactory();
   Base* factoryTest = fact->parse(test, 4);
        std::cout << factoryTest->stringify() << std::endl;
   EXPECT_EQ(factoryTest->evaluate(), 8);
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
