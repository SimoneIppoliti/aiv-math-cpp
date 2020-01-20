#ifndef AIV_POINT_H
#define AIV_POINT_H

class Point {
public:
	Point();
	Point(const float _x, const float _y);
	Point(const Point &other);

	float x;
	float y;

	Point &operator=(const Point &other);

	Point operator+(const float value) const;

	Point operator+(const Point &other) const;

	Point &operator+=(const float value);

	Point &operator+=(const Point &other);

	Point operator-(const float value) const;

	Point operator-(const Point &other) const;

	Point &operator-=(const float value);

	Point &operator-=(const Point &other);

	Point operator-() const;

	Point operator*(const float value) const;

	Point operator*(const Point &other) const;

	Point &operator*=(const float value);

	Point &operator*=(const Point &other);

	Point operator/(const float value) const;

	Point operator/(const Point &other) const;

	Point &operator/=(const float value);

	Point &operator/=(const Point &other);

	float operator[](const int index) const;

	bool operator==(const Point &other) const;

	bool operator!=(const Point &other) const;
};

#endif
