#include "vector4.h"
#include <cmath>

Vector4::Vector4() = default;

Vector4::Vector4(const float _x, const float _y,
const float _z, const float _w) : x{_x}, y{_y}, z{_z}, w{_w} {}

Vector4::Vector4(const Vector4 &other)
: x{other.x}, y{other.y}, z{other.z}, w{other.w} {}

Vector4 &Vector4::operator=(const Vector4 &other) {
	x = other.x;
	y = other.y;
	z = other.z;
    z = other.w;
	return *this;
}

Vector4 Vector4::operator+(const float value) const {
	Vector4 v;
	v.x = x + value;
	v.y = y + value;
	v.z = z + value;
    v.w = w + value;
	return v;
}

Vector4 Vector4::operator+(const Vector4 &other) const {
	Vector4 v;
	v.x = x + other.x;
	v.y = y + other.y;
	v.z = z + other.z;
    v.w = w + other.w;
	return v;
}

Vector4 &Vector4::operator+=(const float value) {
	x += value;
	y += value;
	z += value;
    w += value;
	return *this;
}

Vector4 &Vector4::operator+=(const Vector4 &other) {
	x += other.x;
	y += other.y;
	z += other.z;
    w += other.w;
	return *this;
}

Vector4 Vector4::operator-(const float value) const {
	Vector4 v;
	v.x = x - value;
	v.y = y - value;
	v.z = z - value;
    v.w = w - value;
	return v;
}

Vector4 Vector4::operator-(const Vector4 &other) const {
	Vector4 v;
	v.x = x - other.x;
	v.y = y - other.y;
	v.z = z - other.z;
    v.w = w - other.w;
	return v;
}

Vector4 &Vector4::operator-=(const float value) {
	x -= value;
	y -= value;
	z -= value;
    w -= value;
	return *this;
}

Vector4 &Vector4::operator-=(const Vector4 &other) {
	x -= other.x;
	y -= other.y;
	z -= other.z;
    w -= other.w;
	return *this;
}

Vector4 Vector4::operator-() const {
	Vector4 v;
	v.x = -x;
	v.y = -y;
	v.z = -z;
    v.w = -w;
	return v;
}

Vector4 Vector4::operator*(const float value) const {
	Vector4 v;
	v.x = x * value;
	v.y = y * value;
	v.z = z * value;
    v.w = w * value;
	return v;
}

Vector4 Vector4::operator*(const Vector4 &other) const {
	Vector4 v;
	v.x = x * other.x;
	v.y = y * other.y;
	v.z = z * other.z;
    v.w = w * other.w;
	return v;
}

Vector4 &Vector4::operator*=(const float value) {
	x *= value;
	y *= value;
	z *= value;
    w *= value;
	return *this;
}

Vector4 &Vector4::operator*=(const Vector4 &other) {
	x *= other.x;
	y *= other.y;
	z *= other.z;
    w *= other.w;
	return *this;
}

Vector4 Vector4::operator/(const float value) const {
	Vector4 v;
	v.x = x / value;
	v.y = y / value;
	v.z = z / value;
    v.w = w / value;
	return v;
}

Vector4 Vector4::operator/(const Vector4 &other) const {
	Vector4 v;
	v.x = x / other.x;
	v.y = y / other.y;
	v.z = z / other.z;
    v.w = w / other.z;
	return v;
}

Vector4 &Vector4::operator/=(const float value) {
	x /= value;
	y /= value;
	z /= value;
    w /= value;
	return *this;
}

Vector4 &Vector4::operator/=(const Vector4 &other) {
	x /= other.x;
	y /= other.y;
	z /= other.z;
    w /= other.w;
	return *this;
}

float Vector4::operator[](const int index) const {
	switch (index) {
	case 0:
		return x;
	case 1:
		return y;
	case 2:
		return z;
    case 3:
        return w;
	}
	throw "Vector4: specified index is not valid.";
}

bool Vector4::operator==(const Vector4 &other) const {
	return x == other.x && y == other.y && z == other.z && w == other.w;
}

bool Vector4::operator!=(const Vector4 &other) const {
	return !(*this == other);
}

float Vector4::Magnitude() {
    return std::sqrtf((x * x) + (y * y) + (z * z) + (w * w));
}

Vector4 &Vector4::Normalize() {
    float mag = Magnitude();
	if (mag > 0.0f) {
		*this /= mag;
	}
    
	return *this;
}