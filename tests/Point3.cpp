
#pragma once

#ifndef _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING
#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING
#endif

#include "gtest/gtest.h"

#include "math/Point3.hpp"
#include "../source/math/Point3.cpp"

TEST (Point3, AddTwoPoints) {
	math::Point3 p = {0, 0, 0};
	math::Vector3 v = {1, 1, 1};

	math::Point3 res = p + v;

	EXPECT_EQ(res.x, 1);
	EXPECT_EQ(res.y, 1);
	EXPECT_EQ(res.z, 1);
}