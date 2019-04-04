#pragma once

#include "types.hpp"
#include "Vector3.hpp"

namespace math {
	struct Point3 {
		FLOAT x;
		FLOAT y;
		FLOAT z;
	};
	
	Point3 operator+ (const Point3& p, const Vector3& v);
	Point3 operator- (const Point3& p, const Vector3& v);
	Vector3 operator- (const Point3& p1, const Point3& p2);

	Point3 operator* (const Point3& p, FLOAT s);
	Point3 operator* (FLOAT s, const Point3& p);
 
	FLOAT distance (const Point3& p1, const Point3& p2);
	FLOAT sqdistance (const Point3& p1, const Point3& p2);
};