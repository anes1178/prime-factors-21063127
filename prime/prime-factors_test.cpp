#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

class PrimeFixture : public testing::Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = { 2 };
	EXPECT_EQ(expected, prime_factor.of(2));
}