// LAB2_(1).cpp: определяет точку входа для консольного приложения.
//1. «Комплексное число» – Complex. Класс должен содержать несколько 
//конструкторов и операции для сложения, вычитания, умножения, деления, 
//присваивания. Создать два вектора размерности из комплексных координат. 
//Передать их в функцию, которая выполняет сложение комплексных векторов. 

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "name.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Complex c1, c2;
	cin >> c1;
	cin >> c2;
	cout << "\nc1 = " << c1;
	cout << "c2 = " << c2;
	if (c1 == c2){
		cout << "c1 = c2\r\n";
	}
	if (c1 != c2){
		cout << "c1 != c2\r\n";
	}
	cout << "c1 + c2 = " << (c1 + c2);
	cout << "c1 - c2 = " << (c1 - c2);
	cout << "c1 * c2 = " << (c1 * c2);
	cout << "c1 / c2 = " << (c1 / c2);
	c1.show();
	c2.show();
	system("pause");
	return 0;
}