#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

TEST(PrimeFactors, Of1) {
	PrimeFactor p;
	vector<int> expected = {};
	EXPECT_EQ(expected, p.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactor p;
	vector<int> expected = {2};
	EXPECT_EQ(expected, p.of(2));
}