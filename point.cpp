#include "point.h"

Point::Point() = default;

Point::Point(const float _x, const float _y) : x{_x}, y{_y} {}

Point::Point(const Point &other) : x{other.x}, y{other.y} {}

Point &Point::operator=(const Point &other) {
	x = other.x;
	y = other.y;
	return *this;
}

Point Point::operator+(const float value) const {
	Point p;
	p.x = x + value;
	p.y = y + value;
	return p;
}

Point Point::operator+(const Point &other) const {
	Point p;
	p.x = x + other.x;
	p.y = y + other.y;
	return p;
}

Point &Point::operator+=(const float value) {
	x += value;
	y += value;
	return *this;
}

Point &Point::operator+=(const Point &other) {
	x += other.x;
	y += other.y;
	return *this;
}

Point Point::operator-(const float value) const {
	Point p;
	p.x = x - value;
	p.y = y - value;
	return p;
}

Point Point::operator-(const Point &other) const {
	Point p;
	p.x = x - other.x;
	p.y = y - other.y;
	return p;
}

Point &Point::operator-=(const float value) {
	*this += -value;
	return *this;
}

Point &Point::operator-=(const Point &other) {
	x -= other.x;
	y -= other.y;
	return *this;
}

Point Point::operator-() const {
	Point p;
	p.x = -x;
	p.y = -y;
	return p;
}

Point Point::operator*(const float value) const {
	Point p;
	p.x = x * value;
	p.y = y * value;
	return p;
}

Point Point::operator*(const Point &other) const {
	Point p;
	p.x = x * other.x;
	p.y = y * other.y;
	return p;
}

Point &Point::operator*=(const float value) {
	x *= value;
	y *= value;
	return *this;
}

Point &Point::operator*=(const Point &other) {
	x *= other.x;
	y += other.y;
	return *this;
}

Point Point::operator/(const float value) const {
	Point p;
	p.x = x / value;
	p.y = y / value;
	return p;
}

Point Point::operator/(const Point &other) const {
	Point p;
	p.x = x / other.x;
	p.y = y / other.y;
	return p;
}

Point &Point::operator/=(const float value) {
	x /= value;
	y /= value;
	return *this;
}

Point &Point::operator/=(const Point &other) {
	x /= other.x;
	y /= other.y;
	return *this;
}

float Point::operator[](const int index) const {
	if (index == 0)
		return x;
	else if (index == 1)
		return y;
	throw "Point: specified index is not valid.";
}

bool Point::operator==(const Point &other) const {
	return x == other.x && y == other.y;
}

bool Point::operator!=(const Point &other) const {
	return !(*this == other);
}
