#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;

//-------------------------------------------
Complex::Complex(double aRe, double aIm)
{
	//���������� ������ Complex

	Re = aRe;
	Im = aIm;
}

//-------------------------------------------
Complex::Complex(const Complex& aRval)
{
	//���������� ����������� ������ Complex

	Re = aRval.Re;
	Im = aRval.Im;
}

//-------------------------------------------
Complex::~Complex()
{
	//������������ ������� ������ Complex

	Re = 0.0;
	Im = 0.0;
}

//-------------------------------------------
void Complex::Set(double aRe, double aIm)
{
	//������, ������������� ����������� �����

	Re = aRe;
	Im = aIm;
}

//-------------------------------------------
Complex::operator double()
{
	//���������������� ��������(),
	//���������� ������ ������������ �����
	//���������� double

	return abs();
}

//-------------------------------------------
double Complex::abs()
{
	//���������� ������ ������������ �����
	//���������� double

	return sqrt(Re * Re + Im * Im);
}

//-------------------------------------------
Complex Complex::operator+ (const Complex& aRval)
{
	//����������� ��������� �������� ����������� �����
	//���������� Complex

	Complex result;

	result.Re = Re + aRval.Re;
	result.Im = Im + aRval.Im;

	return result;
}

//-------------------------------------------
Complex Complex::operator- (const Complex& aRval)
{
	//����������� ��������� ��������� ����������� �����
	//���������� Complex

	Complex result;

	result.Re = Re - aRval.Re;
	result.Im = Im - aRval.Im;

	return result;
}

//-------------------------------------------
Complex Complex::operator+ (const double& aRval)
{
	//����������� ��������� �������� �����������
	//����� � ������������ ������
	//���������� Complex

	Complex result;

	result.Re = Re + aRval;
	result.Im = Im;

	return result;
}

//-------------------------------------------
Complex Complex::operator- (const  double& aRval)
{
	//����������� ��������� ��������� �����������
	//����� � ������������ ������
	//���������� Complex

	Complex result(*this);

	result.Re = Re - aRval;

	return result;
}

//-------------------------------------------
Complex Complex::operator* (const Complex& aRval)
{
	//����������� ��������� ��������� ����������� �����
	//���������� Complex

	Complex result;

	result.Re = Re * aRval.Re - Im * aRval.Im;
	result.Im = Re * aRval.Im + Im * aRval.Re;

	return result;
}

//-------------------------------------------
Complex Complex::operator* (const double& aRval)
{
	//����������� ��������� ��������� �����������
	//����� � ������������ ������
	//���������� Complex

	Complex result;

	result.Re = Re * aRval;
	result.Im = Im * aRval;

	return result;
}

//-------------------------------------------
Complex Complex::operator/ (const double& aRval)
{
	//����������� ��������� ������� ������������ �����
	//�� ������������ �����
	//���������� Complex

	Complex result;

	result.Re = Re / aRval;
	result.Im = Im / aRval;

	return result;
}

//-------------------------------------------
Complex& Complex::operator+= (const Complex& aRval)
{
	//����������� ��������� �������� � �����������
	//��� ���� ����������� �����
	//���������� ������ �� Complex

	Re += aRval.Re;
	Im += aRval.Im;

	return *this;
}

//-------------------------------------------
Complex& Complex::operator-= (const Complex& aRval)
{
	//����������� ��������� ��������� � �����������
	//��� ���� ����������� �����
	//���������� ������ �� Complex

	Re -= aRval.Re;
	Im -= aRval.Im;

	return *this;
}

//-------------------------------------------
Complex& Complex::operator*=(const Complex& aRval)
{
	//����������� ��������� ��������� � �����������
	//��� ���� ����������� �����
	//���������� ������ �� Complex

	double tmpRe = Re;

	Re = Re * aRval.Re - Im * aRval.Im;
	Im = Im * aRval.Re + tmpRe * aRval.Im;

	return *this;
}

//-------------------------------------------
Complex& Complex::operator+= (const double& aRval)
{
	//����������� ��������� �������� � �����������
	//��� ������������ ����� � ������������
	//���������� ������ �� Complex

	Re += aRval;

	return *this;
}

//-------------------------------------------
Complex& Complex::operator-= (const double& aRval)
{
	//����������� ��������� ��������� � �����������
	//��� ������������ ����� � ������������
	//���������� ������ �� Complex

	Re -= aRval;

	return *this;
}

//-------------------------------------------
Complex& Complex::operator*= (const double& aRval)
{
	//����������� ��������� ��������� � �����������
	//��� ������������ ����� � ������������
	//���������� ������ �� Complex

	Re *= aRval;
	Im *= aRval;

	return *this;
}

//-------------------------------------------
Complex& Complex::operator/= (const double& aRval)
{
	//����������� ��������� ������� ������������
	//����� �� ������������ � �����������
	//���������� ������ �� Complex

	Re /= aRval;
	Im /= aRval;

	return *this;
}

//-------------------------------------------
Complex& Complex::operator= (const Complex& aRval)
{
	//����������� ��������� ���������� ������������ �����
	//���������� ������ �� Complex
	Re = aRval.Re;
	Im = aRval.Im;

	return *this;
}

//-------------------------------------------
Complex& Complex::operator= (const double& aRval)
{
	//����������� ��������� ���������� ������������� �����
	//���������� ������ �� Complex

	Re = aRval;
	Im = 0.0;

	return *this;
}

//-------------------------------------------
istream& operator>> (istream& stream, Complex& aRval)
{
	//����������� ������ �����

	char tmp[256];

	stream >> aRval.Re >> aRval.Im >> tmp;

	return stream;
}

//-------------------------------------------
ostream& operator<< (ostream& stream, Complex& aRval)
{
	//����������� ������ ������
	stream << aRval.Re;

	if (!(aRval.Im < 0))
		stream << '+';

	stream << aRval.Im << 'i';

	return stream;
}

//-------------------------------------------
Complex operator+ (const double& aLval, const Complex& aRval)
{
	//���������� �������� ������������� ����� � �����������
	//���������� Complex

	Complex result;

	result.Re = aLval + aRval.Re;
	result.Im = aRval.Im;

	return result;
}

//-------------------------------------------
Complex operator-(const double& aLval, const Complex& aRval)
{
	//���������� ��������� �� ������������� ����� ������������
	//���������� Complex

	Complex result;
	result.Re = aLval - aRval.Re;
	result.Im = -aRval.Im;

	return result;
}

//-------------------------------------------
Complex operator* (const double& aLval, const Complex& aRval)
{
	//���������� ��������� ������������� ����� �� �����������
	//���������� Complex

	Complex result;

	result.Re = aLval * aRval.Re;
	result.Im = aLval * aRval.Im;

	return result;
}
