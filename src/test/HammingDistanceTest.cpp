#include <gtest/gtest.h>
#include <HammingDistance.h>

TEST(HammingDistanceTest, calculate_one_element)
{
    HammingDistance hd;
    auto distance = hd.calculate("1","0");
    ASSERT_EQ(1, distance);
}

