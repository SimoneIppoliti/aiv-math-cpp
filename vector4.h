#ifndef AIV_VECTOR4_H
#define AIV_VECTOR4_H

class Vector4 {
public:
	float x;

	float y;

	float z;

	float w;

    Vector4();

	Vector4(const float _x, const float _y,
			const float _z, const float _w);

	Vector4(const Vector4 &other);

    Vector4 &operator=(const Vector4 &other);

	Vector4 operator+(const float value) const;

	Vector4 operator+(const Vector4 &other) const;

	Vector4 &operator+=(const float value);

	Vector4 &operator+=(const Vector4 &other);

	Vector4 operator-(const float value) const;

	Vector4 operator-(const Vector4 &other) const;

	Vector4 &operator-=(const float value);

	Vector4 &operator-=(const Vector4 &other);

	Vector4 operator-() const;

	Vector4 operator*(const float value) const;

	Vector4 operator*(const Vector4 &other) const;

	Vector4 &operator*=(const float value);

	Vector4 &operator*=(const Vector4 &other);

	Vector4 operator/(const float value) const;

	Vector4 operator/(const Vector4 &other) const;

	Vector4 &operator/=(const float value);

	Vector4 &operator/=(const Vector4 &other);

	float operator[](const int index) const;

	bool operator==(const Vector4 &other) const;

	bool operator!=(const Vector4 &other) const;

	float Magnitude();

	Vector4 &Normalize();
};

#endif