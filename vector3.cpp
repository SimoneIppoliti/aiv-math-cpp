#include "vector3.h"
#include <cmath>

Vector3::Vector3() = default;

Vector3::Vector3(const float _x, const float _y, const float _z) : x{_x}, y{_y}, z{_z} {}

Vector3::Vector3(const Vector3 &other) : x{other.x}, y{other.y}, z{other.z} {}

Vector3 &Vector3::operator=(const Vector3 &other) {
	x = other.x;
	y = other.y;
	z = other.z;
	return *this;
}

Vector3 Vector3::operator+(const float value) const {
	Vector3 v;
	v.x = x + value;
	v.y = y + value;
	v.z = z + value;
	return v;
}

Vector3 Vector3::operator+(const Vector3 &other) const {
	Vector3 v;
	v.x = x + other.x;
	v.y = y + other.y;
	v.z = z + other.z;
	return v;
}

Vector3 &Vector3::operator+=(const float value) {
	x += value;
	y += value;
	z += value;
	return *this;
}

Vector3 &Vector3::operator+=(const Vector3 &other) {
	x += other.x;
	y += other.y;
	z += other.z;
	return *this;
}

Vector3 Vector3::operator-(const float value) const {
	Vector3 v;
	v.x = x - value;
	v.y = y - value;
	v.z = z - value;
	return v;
}

Vector3 Vector3::operator-(const Vector3 &other) const {
	Vector3 v;
	v.x = x - other.x;
	v.y = y - other.y;
	v.z = z - other.z;
	return v;
}

Vector3 &Vector3::operator-=(const float value) {
	x -= value;
	y -= value;
	z -= value;
	return *this;
}

Vector3 &Vector3::operator-=(const Vector3 &other) {
	x -= other.x;
	y -= other.y;
	z -= other.z;
	return *this;
}

Vector3 Vector3::operator-() const {
	Vector3 v;
	v.x = -x;
	v.y = -y;
	v.z = -z;
	return v;
}

Vector3 Vector3::operator*(const float value) const {
	Vector3 v;
	v.x = x * value;
	v.y = y * value;
	v.z = z * value;
	return v;
}

Vector3 Vector3::operator*(const Vector3 &other) const {
	Vector3 v;
	v.x = x * other.x;
	v.y = y * other.y;
	v.z = z * other.z;
	return v;
}

Vector3 &Vector3::operator*=(const float value) {
	x *= value;
	y *= value;
	z *= value;
	return *this;
}

Vector3 &Vector3::operator*=(const Vector3 &other) {
	x *= other.x;
	y *= other.y;
	z *= other.z;
	return *this;
}

Vector3 Vector3::operator/(const float value) const {
	Vector3 v;
	v.x = x / value;
	v.y = y / value;
	v.z = z / value;
	return v;
}

Vector3 Vector3::operator/(const Vector3 &other) const {
	Vector3 v;
	v.x = x / other.x;
	v.y = y / other.y;
	v.z = z / other.z;
	return v;
}

Vector3 &Vector3::operator/=(const float value) {
	x /= value;
	y /= value;
	z /= value;
	return *this;
}

Vector3 &Vector3::operator/=(const Vector3 &other) {
	x /= other.x;
	y /= other.y;
	z /= other.z;
	return *this;
}

float Vector3::operator[](const int index) const {
	switch (index) {
	case 0:
		return x;
	case 1:
		return y;
	case 2:
		return z;
	}
	throw "Vector3: specified index is not valid.";
}

bool Vector3::operator==(const Vector3 &other) const {
	return x == other.x && y == other.y && z == other.z;
}

bool Vector3::operator!=(const Vector3 &other) const {
	return !(*this == other);
}

float Vector3::Magnitude() const {
	return std::sqrtf(SquaredMagnitude());
}

float Vector3::SquaredMagnitude() const {
	return (x * x) + (y * y) + (z * z);
}

bool Vector3::IsZero() const {
	return x == 0.0f && y == 0.0f && z == 0.0f;
}

Vector3 &Vector3::Normalize() {
	float mag = Magnitude();
	if (mag > 0.0f) {
		*this /= mag;
	}

	return *this;
}

float Vector3::Dot(const Vector3 &left, const Vector3 &right) {
	return (left.x * right.x) + (left.y * right.y) + (left.z * right.z);
}

Vector3 Vector3::Cross(const Vector3 &left, const Vector3 &right) {
	Vector3 v;
	v.x = (left.y * right.z) - (left.z * right.y);
	v.y = (left.z * right.x) - (left.x * right.z);
	v.z = (left.x * right.y) - (left.y * right.x);
	return v;
}

float Vector3::Distance(const Vector3 &start, const Vector3 &end) {
	return (end - start).Magnitude();
}

Vector3 Vector3::Lerp(const Vector3 &start, const Vector3 &end, const float t) {
	return Vector3(
		((1 - t) * start.x) + (t * end.x),
		((1 - t) * start.y) + (t * end.y),
		((1 - t) * start.z) + (t * end.z)
	);
}
