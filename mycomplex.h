#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>

using namespace std;

class Complex  //управляющая конструкция (class)
{
	double Re; //вещественная часть комплексного числа
	double Im; //мнимая часть комплексного числа

public:

	Complex(double aRe = 0, double aIm = 0); //контруктор создания объекта
	Complex(const Complex&);             //контруктор копирования
	~Complex();                          //деструктор

	void Set(double aRe, double aIm = 0);
	operator double();
	double abs();

	//переопределение операторов сдвига в IO поток
	friend istream& operator>> (istream&, Complex&);
	friend ostream& operator<< (ostream&, Complex&);

	//переопределение оперататоров сложения
	Complex operator+ (const Complex&);
	Complex operator+ (const double&);
	friend Complex operator+ (const double&, const Complex&);

	//переопределение оперататоров вычитания
	Complex operator- (const Complex&);
	Complex operator- (const double&);
	friend Complex operator- (const double&, const Complex&);

	//переопределение оперататоров умножения
	Complex operator* (const Complex&);
	Complex operator* (const double&);
	friend Complex operator* (const double&, const Complex&);

	//переопределение оперататоров деления
	Complex operator/ (const double&);

	//переопределение операторов присваивания комплексных чисел
	Complex& operator += (const Complex&);
	Complex& operator -= (const Complex&);
	Complex& operator *= (const Complex&);
	Complex& operator =  (const Complex&);

	//переопределение операторов присваивания вещественных чисел
	Complex& operator += (const double&);
	Complex& operator -= (const double&);
	Complex& operator *= (const double&);
	Complex& operator /= (const double&);
	Complex& operator =  (const double&);
};
#endif
