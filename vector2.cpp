#include "vector2.h"
#include <cmath>

Vector2::Vector2() = default;

Vector2::Vector2(const float _x, const float _y) : x{_x}, y{_y} {}

Vector2::Vector2(const Point &other)  : x{other.x}, y{other.y} {}

Vector2::Vector2(const Vector2 &other) : x{other.x}, y{other.y} {}

Vector2 &Vector2::operator=(const Point &other) {
	x = other.x;
	y = other.y;
	return *this;
}

Vector2 &Vector2::operator=(const Vector2 &other) {
	x = other.x;
	y = other.y;
	return *this;
}

Vector2 Vector2::operator+(const float value) const {
	Vector2 v;
	v.x = x + value;
	v.y = y + value;
	return v;
}

Vector2 Vector2::operator+(const Point &other) const {
	Vector2 v;
	v.x = x + other.x;
	v.y = x + other.y;
	return v;
}

Vector2 Vector2::operator+(const Vector2 &other) const {
	Vector2 v;
	v.x = x + other.x;
	v.y = y + other.y;
	return v;
}

Vector2 &Vector2::operator+=(const float value) {
	x += value;
	y += value;
	return *this;
}

Vector2 &Vector2::operator+=(const Point &other) {
	x += other.x;
	y += other.y;
	return *this;
}

Vector2 &Vector2::operator+=(const Vector2 &other) {
	x += other.x;
	y += other.y;
	return *this;
}

Vector2 Vector2::operator-(const float value) const {
	Vector2 v;
	v.x = x - value;
	v.y = y - value;
	return v;
}

Vector2 Vector2::operator-(const Point &other) const {
	Vector2 v;
	v.x = x - other.x;
	v.y = y - other.y;
	return v;
}

Vector2 Vector2::operator-(const Vector2 &other) const {
	Vector2 v;
	v.x = x - other.x;
	v.y = y - other.y;
	return v;
}

Vector2 &Vector2::operator-=(const float value) {
	x -= value;
	y -= value;
	return *this;
}

Vector2 &Vector2::operator-=(const Point &other) {
	x -= other.x;
	y -= other.y;
	return *this;
}

Vector2 &Vector2::operator-=(const Vector2 &other) {
	x -= other.x;
	y -= other.y;
	return *this;
}

Vector2 Vector2::operator-() const {
	Vector2 v;
	v.x = -x;
	v.y = -y;
	return v;
}

Vector2 Vector2::operator*(const float value) const {
	Vector2 v;
	v.x = x * value;
	v.y = y * value;
	return v;
}

Vector2 Vector2::operator*(const Point &other) const {
	Vector2 v;
	v.x = x * other.x;
	v.y = y * other.y;
	return v;
}

Vector2 Vector2::operator*(const Vector2 &other) const {
	Vector2 v;
	v.x = x * other.x;
	v.y = y * other.y;
	return v;
}

Vector2 &Vector2::operator*=(const float value) {
	x *= value;
	y *= value;
	return *this;
}

Vector2 &Vector2::operator*=(const Point &other) {
	x *= other.x;
	y *= other.y;
	return *this;
}

Vector2 &Vector2::operator*=(const Vector2 &other) {
	x *= other.x;
	y *= other.y;
	return *this;
}

Vector2 Vector2::operator/(const float value) const {
	Vector2 v;
	v.x = x / value;
	v.y = y / value;
	return v;
}

Vector2 Vector2::operator/(const Point &other) const {
	Vector2 v;
	v.x = x / other.x;
	v.y = y / other.y;
	return v;
}

Vector2 Vector2::operator/(const Vector2 &other) const {
	Vector2 v;
	v.x = x / other.x;
	v.y = y / other.y;
	return v;
}

Vector2 &Vector2::operator/=(const float value) {
	x /= value;
	y /= value;
	return *this;
}

Vector2 &Vector2::operator/=(const Point &other) {
	x /= other.x;
	y /= other.y;
	return *this;
}

Vector2 &Vector2::operator/=(const Vector2 &other) {
	x /= other.x;
	y /= other.y;
	return *this;
}

float Vector2::operator[](const int index) const {
	if (index == 0)
		return x;
	else if (index == 1)
		return y;
	throw "Vector2: specified index is not valid.";
}

bool Vector2::operator==(const Point &other) const {
	return x == other.x && y == other.y;
}

bool Vector2::operator==(const Vector2 &other) const {
	return x == other.x && y == other.y;
}

bool Vector2::operator!=(const Point &other) const {
	return !(*this == other);
}

bool Vector2::operator!=(const Vector2 &other) const {
	return !(*this == other);
}

float Vector2::Magnitude() const {
	return std::sqrtf(SquaredMagnitude());
}

float Vector2::SquaredMagnitude() const {
	return (x * x) + (y * y);
}

bool Vector2::IsZero() const {
	return x == 0.0f && y == 0.0f;
}

Vector2 &Vector2::Normalize() {
	float mag = Magnitude();
	if (mag > 0.0f) {
		*this /= mag;
	}
	
	return *this;
}

float Vector2::Dot(const Vector2 &left, const Vector2 &right) {
	return (left.x * right.x) + (left.y + right.y);
}

float Vector2::Distance(const Vector2 &start, const Vector2 &end) {
	return (end - start).Magnitude();
}

Vector2 Vector2::Lerp(const Vector2 &start, const Vector2 &end, const float t) {
	return Vector2(
		((1 - t) * start.x) + (t * end.x),
		((1 - t) * start.y) + (t * end.y)
	);
}
