/*!
    @file
    @brief Файл с тестированием методов класса комплексного числа
*/

#include <iostream>
#include "mycomplex.h"

using namespace std;
/*!
    @brief Точка входа в программу
    @return 0
*/
int main() // управляющая конструкция (заголовок функции main)
{
	//тестирование класса комплексных чисел
	Complex A,
			B(-4),
			C(23.0, 45.9);


	cout << A << "," << B << "," << C << endl << endl;
	A = B + C;
	cout << "A = B + C, A = " << A << endl;

	Complex M = B - C;
	cout << "M = B - C, M = " << M << endl;
	cout << "M * A = " << M * A << endl;
	cout << "M / 4.45 = " << M / 4.45 << endl << endl;

	Complex D;
	cout << "Enter complex number D = ";

	cin >> D;
	A += C + D;
	cout << "D = " << D << endl;
    cout << "A += C + D, A = " << A << endl;
	return 0;
}
