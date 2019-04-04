#pragma once

#include "math\Vector3.hpp"
#include <cmath>

using namespace math;

Vector3 
math::operator+ (
	const Vector3& p_v1, 
	const Vector3& p_v2
) {
	return {
		p_v1.x + p_v2.x,
		p_v1.y + p_v2.y,
		p_v1.z + p_v2.z
	};
}

Vector3 
math::operator- (
	const Vector3& p_v1, 
	const Vector3& p_v2
) {
	return {
		p_v1.x - p_v2.x,
		p_v1.y - p_v2.y,
		p_v1.z - p_v2.z
	};
}

Vector3 
math::operator* (
	const Vector3& p_v1, 
	FLOAT p_scalar
) {
	return {
		p_v1.x * p_scalar,
		p_v1.y * p_scalar,
		p_v1.z * p_scalar
	};
}

Vector3 
math::operator* (
	FLOAT p_scalar, 
	const Vector3& p_v1
) {
	return {
		p_scalar * p_v1.x,
		p_scalar * p_v1.y,
		p_scalar * p_v1.z
	};
}

Vector3 
math::operator/ (
	const Vector3& p_v1, 
	FLOAT p_scalar
) {
	return {
		p_v1.x / p_scalar,
		p_v1.y / p_scalar,
		p_v1.z / p_scalar
	};
}

Vector3 
math::operator+= (
	Vector3 p_lhs, 
	const Vector3& p_rhs
) {
	p_lhs.x += p_rhs.x;
	p_lhs.y += p_rhs.y;
	p_lhs.z += p_rhs.z;

	return p_lhs;
}
 
FLOAT 
math::magnitude (
	const Vector3& p_v
) {
	return std::sqrt(math::sqmagnitude(p_v));
}

FLOAT 
math::sqmagnitude (
	const Vector3& p_v
) {
	return std::pow(p_v.x, 2) + std::pow(p_v.y, 2) + std::pow(p_v.z, 2);
}

Vector3 
math::normalize (
	const Vector3& p_v
) {
	return p_v / math::magnitude(p_v);
}

FLOAT 
math::dot (
	const Vector3& p_u, 
	const Vector3& p_v
) {
	return p_u.x * p_v.x
		+ p_u.y * p_v.y
		+ p_u.z * p_v.z;
}

Vector3 
math::cross (
	const Vector3& p_u, 
	const Vector3& p_v
) {
	return {
		(p_u.y * p_v.z) - (p_u.z * p_v.y),
		(p_u.z * p_v.x) - (p_u.x * p_v.z),
		(p_u.x * p_v.y) - (p_u.y * p_v.x)
	};
}
