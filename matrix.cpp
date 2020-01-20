#include "matrix.h"
#include <cstring>

Matrix::Matrix() {
	data = new float[16];
	rows = columns = 4;
}

Matrix::Matrix(const int size) {
	data = new float[size * size];
	rows = columns = size;
}

Matrix::Matrix(const int _rows, const int _cols) {
	data = new float[_rows * _cols];
	rows = _rows;
	columns = _cols;
}

Matrix::~Matrix() {
	delete[] data;
}

int Matrix::Rows() {
	return rows;
}

int Matrix::Columns() {
	return columns;
}

Matrix &Matrix::operator=(const Matrix &other) {
	rows = other.rows;
	columns = other.columns;
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		data[i] = other.data[i];
	}
	return *this;
}

Matrix Matrix::operator+(const float value) const {
	Matrix m;
	m.rows = rows;
	m.columns = columns;
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		m.data[i] = data[i] + value;
	}
	return m;
}

Matrix Matrix::operator+(const Matrix &other) const {
	Matrix m;
	m.rows = rows;
	m.columns = columns;
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		m.data[i] = data[i] + other.data[i];
	}
	return m;
}

Matrix &Matrix::operator+=(const float value) {
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		data[i] += value;
	}
	return *this;
}

Matrix &Matrix::operator+=(const Matrix &other) {
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		data[i] += other.data[i];
	}
	return *this;
}

Matrix Matrix::operator-(const float value) const {
	Matrix m;
	m.rows = rows;
	m.columns = columns;
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		m.data[i] = data[i] - value;
	}
	return m;
}

Matrix Matrix::operator-(const Matrix &other) const {
	Matrix m;
	m.rows = rows;
	m.columns = columns;
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		m.data[i] = data[i] + other.data[i];
	}
	return m;
}

Matrix &Matrix::operator-=(const float value) {
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		data[i] -= value;
	}
	return *this;
}

Matrix &Matrix::operator-=(const Matrix &other) {
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		data[i] -= other.data[i];
	}
	return *this;
}

Matrix Matrix::operator*(const float value) const {
	Matrix m;
	m.rows = rows;
	m.columns = columns;
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		m.data[i] = data[i] * value;
	}
	return m;
}

Matrix Matrix::operator*(const Matrix &other) const {
	Matrix m;
	m.rows = rows;
	m.columns = columns;
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		m.data[i] = data[i] * other.data[i];
	}
	return m;
}

Matrix &Matrix::operator*=(const float value) {
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		data[i] *= value;
	}
	return *this;
}

Matrix &Matrix::operator*=(const Matrix &other) {
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		data[i] *= other.data[i];
	}
	return *this;
}

Matrix Matrix::operator/(const float value) const {
	Matrix m;
	m.rows = rows;
	m.columns = columns;
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		m.data[i] = data[i] / value;
	}
	return m;
}

Matrix Matrix::operator/(const Matrix &other) const {
	Matrix m;
	m.rows = rows;
	m.columns = columns;
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		m.data[i] = data[i] / other.data[i];
	}
	return m;
}

Matrix &Matrix::operator/=(const float value) {
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		data[i] /= value;
	}
	return *this;
}

Matrix &Matrix::operator/=(const Matrix &other) {
	int size = rows * columns;
	for (int i = 0; i < size; i++) {
		data[i] /= other.data[i];
	}
	return *this;
}

float &Matrix::operator[](const int index) const {
	if (index > rows)
		throw "Index out of matrix range";
	return data[index * columns];
}

bool Matrix::operator==(const Matrix &other) const {
	return std::memcpm(data, other.data, sizeof(data)) == 0 && rows == other.rows
		   && columns == other.columns;
}

bool Matrix::operator!=(const Matrix &other) const {
	return !(*this == other);
}
