//
// Created by tangl on 2023/9/1.
//

#ifndef GTEST_GMOCK_MOCKUSER_HPP
#define GTEST_GMOCK_MOCKUSER_HPP

#include "../inc/user.hpp"
#include <gmock/gmock.h>
class MockUser:public User
{
public:
    MOCK_METHOD(int,getAge,(),(override));

};



#endif//GTEST_GMOCK_MOCKUSER_HPP
