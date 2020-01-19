#include "point.h"

#ifndef AIV_VECTOR2_H
#define AIV_VECTOR2_H

class Vector2 : public Point {
public:
	Vector2();
	Vector2(const float _x, const float _y);
	Vector2(const Point &other);
	Vector2(const Vector2 &other);

	Vector2 &operator=(const Point &other);

	Vector2 &operator=(const Vector2 &other);

	Vector2 operator+(const float value) const;

	Vector2 operator+(const Point &other) const;

	Vector2 operator+(const Vector2 &other) const;

	Vector2 &operator+=(const float value);

	Vector2 &operator+=(const Point &other);

	Vector2 &operator+=(const Vector2 &other);

	Vector2 operator-(const float value) const;

	Vector2 operator-(const Point &other) const;

	Vector2 operator-(const Vector2 &other) const;

	Vector2 &operator-=(const float value);

	Vector2 &operator-=(const Point &other);

	Vector2 &operator-=(const Vector2 &other);

	Vector2 operator-() const;

	Vector2 operator*(const float value) const;

	Vector2 operator*(const Point &other) const;

	Vector2 operator*(const Vector2 &other) const;

	Vector2 &operator*=(const float value);

	Vector2 &operator*=(const Point &other);

	Vector2 &operator*=(const Vector2 &other);

	Vector2 operator/(const float value) const;

	Vector2 operator/(const Point &other) const;

	Vector2 operator/(const Vector2 &other) const;

	Vector2 &operator/=(const float value);

	Vector2 &operator/=(const Point &other);

	Vector2 &operator/=(const Vector2 &other);

	float operator[](const int index) const;

	bool operator==(const Point &other) const;

	bool operator==(const Vector2 &other) const;

	bool operator!=(const Point &other) const;

	bool operator!=(const Vector2 &other) const;

	float Magnitude() const;

	float SquaredMagnitude() const;

	bool IsZero() const;

	Vector2 &Normalize();

	static float Dot(const Vector2 &left, const Vector2 &right);

	static float Distance(const Vector2 &start, const Vector2 &end);

	static Vector2 Lerp(const Vector2 &start, const Vector2 &end, const float t);
};

#endif
