// Lab_03_1.cpp
// Лин Тарас
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 13

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = 2 * abs(x - 5);	if (x < -1)		B = (sin(x) * sin(x)) / 1 + abs(cos(x));	else		if (x <= -1 && x >= 1)			B = cos(1 / abs(x + 2)) * cos(1 / abs(x + 2));		else			B = log(x + 2);	y = A + B;	cout << "2) y= " << y << endl;	cin.get();	return 0;	}