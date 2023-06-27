#include <gtest/gtest.h>

#include <mobilenet/mobilenet.hpp>

TEST(HelloTest, BasicAssertions) {
    EXPECT_STRNE("hello", "world");
}

TEST(MobilenetTest, BasicAssertions) {
    mb::Mobilenet mobilenet;
    EXPECT_EQ(7 * 6, 42);
}

