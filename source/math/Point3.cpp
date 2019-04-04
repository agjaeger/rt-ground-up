	
#include "math/Point3.hpp"

using namespace math;
	
Point3 
math::operator+ (
	const Point3& p_point, 
	const Vector3& p_vector
) {
	return {
		p_point.x + p_vector.x,
		p_point.y + p_vector.y,
		p_point.z + p_vector.z
	};	
}

Point3 
math::operator- (
	const Point3& p_point, 
	const Vector3& p_vector
) {
	return {
		p_point.x - p_vector.x,
		p_point.y - p_vector.y,
		p_point.z - p_vector.z
	};	
}

Vector3 
math::operator- (
	const Point3& p_point1, 
	const Point3& p_point2
) {
	return {
		p_point1.x - p_point2.x,
		p_point1.y - p_point2.y,
		p_point1.z - p_point2.z
	};
}

Point3 
math::operator* (
	const Point3& p_point, 
	FLOAT p_scalar
) {
	return {
		p_point.x * p_scalar,
		p_point.y * p_scalar,
		p_point.z * p_scalar
	};
}
	
Point3 
math::operator* (
	FLOAT p_scalar, 
	const Point3& p_point
) {
	return {
		p_scalar * p_point.x,
		p_scalar * p_point.y,
		p_scalar * p_point.z
	};
}
 
FLOAT math::distance (
	const Point3& p_point1, 
	const Point3& p_point2
) {
	return math::magnitude(p_point1 - p_point2);
}
	
FLOAT 
math::sqdistance (
	const Point3& p_point1, 
	const Point3& p_point2
) {
	return math::sqmagnitude(p_point1 - p_point2);
}