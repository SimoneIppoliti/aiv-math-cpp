#ifndef AIV_VECTOR3_H
#define AIV_VECTOR3_H

class Vector3
{
public:
	Vector3();
	Vector3(const float _x, const float _y, const float _z);
	Vector3(const Vector3 &other);

	float x;
	float y;
	float z;

	Vector3 &operator=(const Vector3 &other);

	Vector3 operator+(const float value) const;

	Vector3 operator+(const Vector3 &other) const;

	Vector3 &operator+=(const float value);

	Vector3 &operator+=(const Vector3 &other);

	Vector3 operator-(const float value) const;

	Vector3 operator-(const Vector3 &other) const;

	Vector3 &operator-=(const float value);

	Vector3 &operator-=(const Vector3 &other);

	Vector3 operator-() const;

	Vector3 operator*(const float value) const;

	Vector3 operator*(const Vector3 &other) const;

	Vector3 &operator*=(const float value);

	Vector3 &operator*=(const Vector3 &other);

	Vector3 operator/(const float value) const;

	Vector3 operator/(const Vector3 &other) const;

	Vector3 &operator/=(const float value);

	Vector3 &operator/=(const Vector3 &other);

	float operator[](const int index) const;

	bool operator==(const Vector3 &other) const;

	bool operator!=(const Vector3 &other) const;

	float Magnitude() const;

	float SquaredMagnitude() const;

	bool IsZero() const;

	Vector3 &Normalize();

	static float Dot(const Vector3 &left, const Vector3 &right);

	static Vector3 Cross(const Vector3 &left, const Vector3 &right);

	static float Distance(const Vector3 &start, const Vector3 &end);

	static Vector3 Lerp(const Vector3 &start, const Vector3 &end, const float t);
};

#endif
