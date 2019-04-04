
#pragma once
#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING

#include "gtest/gtest.h"

#include "math/Vector3.hpp"
#include "../source/math/Vector3.cpp"

TEST (Vector3, AddTwoVecs) {
	math::Vector3 a = {0, 0, 0};
	math::Vector3 b = {1, 1, 1};
	math::Vector3 res = a + b;

	EXPECT_EQ(res.x, 1);
	EXPECT_EQ(res.y, 1);
	EXPECT_EQ(res.z, 1);
}