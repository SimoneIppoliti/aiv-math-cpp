#ifndef AIV_MATRIX_H
#define AIV_MATRIX_H

class Matrix
{
private:
	float *data;
	int rows;
	int columns;

public:
	Matrix();
	Matrix(const int size);
	Matrix(const int _rows, const int _cols);

	~Matrix();

	int Rows();
	int Columns();

	Matrix &operator=(const Matrix &other);

	Matrix operator+(const float value) const;

	Matrix operator+(const Matrix &other) const;

	Matrix &operator+=(const float value);

	Matrix &operator+=(const Matrix &other);

	Matrix operator-(const float value) const;

	Matrix operator-(const Matrix &other) const;

	Matrix &operator-=(const float value);

	Matrix &operator-=(const Matrix &other);

	Matrix operator*(const float value) const;

	Matrix operator*(const Matrix &other) const;

	Matrix &operator*=(const float value);

	Matrix &operator*=(const Matrix &other);

	Matrix operator/(const float value) const;

	Matrix operator/(const Matrix &other) const;

	Matrix &operator/=(const float value);

	Matrix &operator/=(const Matrix &other);

	float &operator[](const int index) const;

	bool operator==(const Matrix &other) const;

	bool operator!=(const Matrix &other) const;
};

#endif
