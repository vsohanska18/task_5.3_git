
#include <gtest/gtest.h>
#include <cmath>

double z(const double x);

TEST(ZTest, Zero)
{
    EXPECT_NEAR(z(0.0), 0.0, 0.0001);
}

TEST(ZTest, Series)
{
    EXPECT_NEAR(z(0.5), 1.175201, 0.0001);
}

TEST(ZTest, Formula)
{
    double expected = (cos(2.0) + 1.0) / (cos(1.0) + sin(1.0) * sin(1.0));

    EXPECT_NEAR(z(1.0), expected, 0.0001);
}

TEST(ZTest, NegativeValue)
{
    EXPECT_NEAR(z(-0.5), -1.175201, 0.0001);
}