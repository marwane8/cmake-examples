#include<gtest/gtest.h>
#include "adder.h"

TEST(Adding,Adding){
    ASSERT_EQ(mathapp::addByTwo(3),5);
}
