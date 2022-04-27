/*!
    @file
    @brief Файл с описанием методов класса комплексного числа
*/

#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;

//-------------------------------------------
/*!
    @brief Консруктор класса Complex
    @param aRe действительная составляющая
    @param aIm действительная составляющая
*/
Complex::Complex(double aRe, double aIm)
{
	Re = aRe;
	Im = aIm;
}

//-------------------------------------------
/*!
    @brief Консруктор копирования класса Complex
    @param aRval Комплексное число
*/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
Complex::Complex(const Complex& aRval)
{
	Re = aRval.Re;
	Im = aRval.Im;
}

//-------------------------------------------
/*!
    @brief Деконсруктор класса Complex
*/
Complex::~Complex()
{
	int ngfn;
	Re = 0.0;
	Im = 0.0;
}

//-------------------------------------------
/*!
    @brief Консруктор класса Complex
    @param aRe действительная составляющая
    @param aIm действительная составляющая
*/
void Complex::Set(double aRe, double aIm)
{
	//сеттер, устанавливает комплексное число

	Re = aRe;
	Im = aIm;
}

//-------------------------------------------
/*!
    @brief Переопределенный оператор()
    @return Модуль комплексного число
*/
Complex::operator double()
{
	return abs();
}

//-------------------------------------------
/*!
    @brief Модуль комплексного число
    @return Модуль комплексного число
*/
double Complex::abs()
{
	return sqrt(Re * Re + Im * Im);
}

//-------------------------------------------
/*!
    @brief Оператор сложения
    @param aRval Комплексное число
    @return Сумму комплексных чисел
*/
Complex Complex::operator+ (const Complex& aRval)
{
	Complex result;

	result.Re = Re + aRval.Re;
	result.Im = Im + aRval.Im;

	return result;
}

//-------------------------------------------
/*!
    @brief Оператор вычитания
    @param aRval Комплексное число
    @return Разность комплексных чисел
*/
Complex Complex::operator- (const Complex& aRval)
{
	Complex result;

	result.Re = Re - aRval.Re;
	result.Im = Im - aRval.Im;

	return result;
}

//-------------------------------------------
/*!
    @brief Оператор сложения
    @param aRval Вещественное число
    @return Сумму комплексных чисел
*/
Complex Complex::operator+ (const double& aRval)
{
	Complex result;

	result.Re = Re + aRval;
	result.Im = Im;

	return result;
}

//-------------------------------------------
/*!
    @brief Оператор вычитания
    @param aRval Вещественное число
    @return Разность комплексных чисел
*/
Complex Complex::operator- (const  double& aRval)
{
	Complex result(*this);

	result.Re = Re - aRval;

	return result;
}

//-------------------------------------------
/*!
    @brief Оператор умножения
    @param aRval Комплексное число
    @return Произведение комплексных чисел
*/
Complex Complex::operator* (const Complex& aRval)
{
	Complex result;

	result.Re = Re * aRval.Re - Im * aRval.Im;
	result.Im = Re * aRval.Im + Im * aRval.Re;

	return result;
}

//-------------------------------------------
/*!
    @brief Оператор умножения
    @param aRval Вещественное число
    @return Произведение комплексных чисел
*/
Complex Complex::operator* (const double& aRval)
{
	Complex result;

	result.Re = Re * aRval;
	result.Im = Im * aRval;

	return result;
}

//-------------------------------------------
/*!
    @brief Оператор деления
    @param aRval Вещественное число
    @return Частное комплексных чисел
*/
Complex Complex::operator/ (const double& aRval)
{
	Complex result;

	result.Re = Re / aRval;
	result.Im = Im / aRval;

	return result;
}

//-------------------------------------------
/*!
    @brief Оператор сложения с присваиванием
    @param aRval Комплексное число
    @return Сумму комплексных чисел
*/
Complex& Complex::operator+= (const Complex& aRval)
{
	Re += aRval.Re;
	Im += aRval.Im;

	return *this;
}

//-------------------------------------------
/*!
    @brief Оператор вычитания с присваиванием
    @param aRval Комплексное число
    @return Разность комплексных чисел
*/
Complex& Complex::operator-= (const Complex& aRval)
{
	Re -= aRval.Re;
	Im -= aRval.Im;

	return *this;
}

//-------------------------------------------
/*!
    @brief Оператор умножения с присваиванием
    @param aRval Комплексное число
    @return Произведение комплексных чисел
*/
Complex& Complex::operator*=(const Complex& aRval)
{
	double tmpRe = Re;

	Re = Re * aRval.Re - Im * aRval.Im;
	Im = Im * aRval.Re + tmpRe * aRval.Im;

	return *this;
}

//-------------------------------------------
/*!
    @brief Оператор сложения с присваиванием
    @param aRval Вещественное число
    @return Сумму комплексных чисел
*/
Complex& Complex::operator+= (const double& aRval)
{
	Re += aRval;

	return *this;
}

//-------------------------------------------
/*!
    @brief Оператор вычитания с присваиванием
    @param aRval Вещественное число
    @return Разность комплексных чисел
*/
Complex& Complex::operator-= (const double& aRval)
{
	Re -= aRval;

	return *this;
}

//-------------------------------------------
/*!
    @brief Оператор умножения с присваиванием
    @param aRval Вещественное число
    @return Произведение комплексных чисел
*/
Complex& Complex::operator*= (const double& aRval)
{
	Re *= aRval;
	Im *= aRval;

	return *this;
}

//-------------------------------------------
/*!
    @brief Оператор деления с присваиванием
    @param aRval Вещественное число
    @return Частное комплексных чисел
*/
Complex& Complex::operator/= (const double& aRval)
{
	Re /= aRval;
	Im /= aRval;

	return *this;
}

//-------------------------------------------
/*!
    @brief Оператор присваивания
    @param aRval Комплексное число
    @return Ссылка на объект
*/
Complex& Complex::operator= (const Complex& aRval)
{
	Re = aRval.Re;
	Im = aRval.Im;

	return *this;
}

//-------------------------------------------
/*!
    @brief Оператор присваивания
    @param aRval Вещественное число
    @return Ссылка на объект
*/
Complex& Complex::operator= (const double& aRval)
{
	Re = aRval;
	Im = 0.0;

	return *this;
}

//-------------------------------------------
/*!
    @brief Оператор сдвига вправо
    @param stream Поток ввода
    @param aRval Комплексное число число
    @return IO поток
*/
istream& operator>> (istream& stream, Complex& aRval)
{
	char tmp[256];

	stream >> aRval.Re >> aRval.Im >> tmp;

	return stream;
}

//-------------------------------------------
/*!
    @brief Оператор сдвига вправо
    @param stream Поток вывода
    @param aRval Комплексное число число
    @return IO поток
*/
ostream& operator<< (ostream& stream, Complex& aRval)
{
	stream << aRval.Re;

	if (!(aRval.Im < 0))
		stream << '+';

	stream << aRval.Im << 'i';

	return stream;
}

//-------------------------------------------
/*!
    @brief Оператор сложения
    @param aLval Вещественное число
    @param aRval Комплексное число
    @return Сумма чисел
*/
Complex operator+ (const double& aLval, const Complex& aRval)
{
	Complex result;

	result.Re = aLval + aRval.Re;
	result.Im = aRval.Im;

	return result;
}

//-------------------------------------------
/*!
    @brief Оператор вычитания
    @param aLval Вещественное число
    @param aRval Комплексное число
    @return Разность чисел
*/
Complex operator-(const double& aLval, const Complex& aRval)
{
	Complex result;
	result.Re = aLval - aRval.Re;
	result.Im = -aRval.Im;

	return result;
}

//-------------------------------------------
/*!
    @brief Оператор умножения
    @param aLval Вещественное число
    @param aRval Комплексное число
    @return Произведение чисел
*/
Complex operator* (const double& aLval, const Complex& aRval)
{
	Complex result;

	result.Re = aLval * aRval.Re;
	result.Im = aLval * aRval.Im;

	return result;
}
