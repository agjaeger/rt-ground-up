#pragma once

#include "types.hpp"

namespace math {
	struct Vector3 {
		FLOAT x;
		FLOAT y;
		FLOAT z;
	};

	Vector3 operator+ (const Vector3& v1, const Vector3& v2);
	Vector3 operator- (const Vector3& v1, const Vector3& v2);
	Vector3 operator* (const Vector3& v1, FLOAT s);
	Vector3 operator* (FLOAT s, const Vector3& v1);
	Vector3 operator/ (const Vector3& v1, FLOAT s);
	Vector3 operator+=(Vector3 lhs, const Vector3& rhs);
 
	FLOAT magnitude (const Vector3& v);
	FLOAT sqmagnitude (const Vector3& v);
	Vector3 normalize (const Vector3& v);

	FLOAT dot (const Vector3& u, const Vector3& v);
	Vector3 cross (const Vector3& u, const Vector3& v);
};
