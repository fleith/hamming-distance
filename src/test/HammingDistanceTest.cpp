#include <gtest/gtest.h>
#include <HammingDistance.h>

TEST(HammingDistanceTest, calculate_one_element)
{
    HammingDistance hd;
    auto distance = hd.calculate("1","0");
    ASSERT_EQ(1, distance);
}

TEST(HammingDistanceTest, calculate_different_size_blob)
{
    HammingDistance hd;
    ASSERT_THROW(hd.calculate("1","01"), InvalidBinaryBlobSize);
}

TEST(HammingDistanceTest, calculate_invalid_binary)
{
    HammingDistance hd;
    ASSERT_THROW(hd.calculate("102","010"), InvalidBinaryNumber);
}