#include <iostream>
#include <gtest/gtest.h>
int add(int a,int b)
{
    return a+b;
}


TEST (testcase1,should_3_when_given_2_and_1)
{
    EXPECT_EQ (add(2,1),3);
}
TEST (testcase1,should_13_when_given_12_and_1)
{
    EXPECT_EQ (add(12,1),13);
}
#include "../stubs/MockUser.hpp"
#include <gmock/gmock.h>
TEST (testcase2,test)
{
    MockUser user;
    EXPECT_CALL(user,getAge)
            .Times(::testing::AtLeast(3))
            .WillOnce(::testing::Return(200))
            .WillOnce(::testing::Return(300))
            .WillRepeatedly(::testing::Return(500));


    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;


}

int main (int argc,char** argv) {
    testing::InitGoogleTest(&argc,argv);
    std::cout << "this is B" << std::endl;
    return RUN_ALL_TESTS();
}
