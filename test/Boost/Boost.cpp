#include <gtest/gtest.h>

#include "../../src/Boost.cpp"


namespace {


    //Tests from C343
//    TEST(Clear, Test1_Int) {
//
//        EXPECT_EQ(list->length(), 0);
//    }
//
//**
// *
// * My tests:
// *
// */
//
//
//    TEST(Clear, MyTest1_Int) {
//
//        EXPECT_EQ(list->length(), 0);
//    }





    TEST(BoostTest, BasicAssertions) {


        // Expect two strings not to be equal.
        EXPECT_STRNE("hello", "world");
        // Expect equality.
        EXPECT_EQ(7 * 6, 42);
    }

}