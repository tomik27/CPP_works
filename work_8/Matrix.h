#pragma once
#include <iostream>
template<typename T>
struct Matrix {
private:
	T** MatrixValues;
	int row;
	int column;
public:
	Matrix(int row, int column);
	Matrix(const Matrix<T>& copy);
	~Matrix();
	void nastav(int row, int column, T hodnota);
	void NastavZ(T* pole);
	T& Dej(int radek, int sloupec);
	const T& Dej(int row, int column)const;
	template<typename R>
	Matrix<R> Pretypuj() const;
	Matrix<T> Transpozice() const;
	Matrix<T> Soucin(const Matrix& m) const;
	Matrix<T> Soucin(T skalar) const;
	Matrix<T> Soucet(const Matrix& m) const;
	Matrix<T> Soucet(T skalar) const;
	bool JeShodna(const Matrix<T>& m) const;
	void Vypis() const;
};
template<typename T>
Matrix<T>::Matrix(int row, int column)
{
	this->column = column;
	this->row = row;
	this->MatrixValues = new T * [row];
	for (int i = 0; i < row; ++i)
		this->MatrixValues[i] = new T[column];
}


template<typename T>
Matrix<T>::Matrix(const Matrix<T>& copy) {
	this->column = copy.column;
	this->row = copy.row;
	MatrixValues = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		MatrixValues[i] = new T[column];
		for (size_t j = 0; j < column; j++)
		{
			MatrixValues[i][j] = copy.MatrixValues[i][j];
		}
	}
}

template<typename T>
Matrix<T>::~Matrix()
{
	for (int i = 0; i < this->row; ++i)
		delete[] this->MatrixValues[i];

	delete[] MatrixValues;
}

template<typename T>
void Matrix<T>::nastav(int row, int column, T hodnota)
{
	if(this->column<column||0>column||this->row<row||row<0)
		throw std::invalid_argument("Chybny argument");

	MatrixValues[row][column] = hodnota;
}

template<typename T>
void Matrix<T>::NastavZ(T* pole)
{
	//Matrix<T> newMatrix = Matrix<T>(this->column, this->row);
	int length =0;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < column; j++)
		{
			this->MatrixValues[i][j] = pole[length];
			length++;
		}

	}
}

template<typename T>
T& Matrix<T>::Dej(int row, int column)
{
	if (this->column<column || 0>column || this->row < row || row < 0)
		throw std::invalid_argument("Chybny argument");

	return this->MatrixValues[row][column];
}

template<typename T>
const T& Matrix<T>::Dej(int row, int column) const
{
	if (this->column<column || 0>column || this->row < row || row < 0)
		throw std::invalid_argument("Chybny argument");

	return this->MatrixValues[row][column];
}
template<typename T>
template<typename R>
Matrix<R> Matrix<T>::Pretypuj() const {
	Matrix<R> newMatrix = { this->row, this->column };
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < column; j++)
		{
			//newMatrix[i][j] = this->MatrixValues[i][j];
			//newMatrix.MatrixValues[i][j] = static_cast<R>(this.MatrixValues[i][j]);
			newMatrix.nastav(i, j, static_cast<R>(this->Dej(i, j)));
		}
	}
	return newMatrix;
}

template<typename T>
Matrix<T> Matrix<T>::Transpozice() const
{
	Matrix<T> TransMatrix = { this->column, this->row };
	for (size_t i = 0; i < this->row; i++)
	{
		for (size_t j = 0; j < this->column; j++)
		{
			TransMatrix.MatrixValues[i][j] = this->MatrixValues[i][j];
		}
	}
	return  TransMatrix;
}

template<typename T>
Matrix<T> Matrix<T>::Soucin(const Matrix& m) const
{
	if (this->column !=m.row) {
		throw std::invalid_argument("Chybny argument");
	}
	Matrix<T> newMatrix = { this->row, this->column };
	for (size_t i = 0; i < row; i++)
	{
		int sum = 0;
		for (size_t j = 0; j < column; j++)
		{
			for (size_t k = 0; k < row; k++)
			{
				 sum=sum+ this->MatrixValues[i][k] * m.MatrixValues[k][j];
			}
			newMatrix.MatrixValues[i][j] = sum;
		}
	}
	return newMatrix;
}

template<typename T>
Matrix<T> Matrix<T>::Soucin(T skalar) const
{

	for (size_t i = 0; i < this->row; i++)
	{
		for (size_t j = 0; j < this->column; j++)
		{
			this->MatrixValues[i][j] * skalar;
		}
	}
}

template<typename T>
Matrix<T> Matrix<T>::Soucet(const Matrix& m) const
{

	if ((this->row != m.row)||(this->column!=m.column)) {
		throw std::invalid_argument("Chybny argument");
	}
	//Matrix<T> newMatrix =  Matrix<T>(this->row, this->column);
	Matrix<T> newMatrix{ row, column };
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < column; j++)
		{
			newMatrix.MatrixValues[i][j] = m.MatrixValues[i][j] + this->MatrixValues[i][j];
		}
	}
	return newMatrix;
}

template<typename T>
Matrix<T> Matrix<T>::Soucet(T skalar) const
{
	if (skalar < 1) {
		throw std::invalid_argument("Chybny argument");
	}
	Matrix<T> newMatrix = Matrix<T>(this->row, this->column);
	for (size_t i = 0; i < this->row; i++)
	{
		for (size_t j = 0; j < this->column; j++)
		{
			newMatrix[i][j] =this->MatrixValues[i][j] + skalar;
		}
	}
	return newMatrix;
}



template<typename T>
bool Matrix<T>::JeShodna(const Matrix& m) const
{
	if ((this->row != m.row) || (this->column != m.column)) {
		throw std::invalid_argument("Chybny argument");
	}
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < column; j++)
		{
			if (m.MatrixValues[i][j] != this->MatrixValues[i][j]) {
				return false;
			}
		}
	}
	return true;
}
template<typename T>
void Matrix<T>::Vypis() const
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < column; j++)
		{
			std::cout << this->MatrixValues[i][j] << " ";
		}
		std::cout << std::endl;
	}
}



