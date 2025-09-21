#include "../include/sprout.h"
#include <gtest/gtest.h>



TEST(SproutTest, SimpleCase) {
    int result = daysToReachHeight(5, 2, 10);
    EXPECT_EQ(result, 3);
}

TEST(SproutTest, EdgeCase) {
    int result = daysToReachHeight(1, 1, 1);
    EXPECT_EQ(result, 1);
}