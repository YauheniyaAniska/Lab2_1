#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "name.h"
#include "fstream"

using namespace std;

Complex::Complex(){
	real = 0, image = 0;
}

Complex Complex::operator+(Complex &fp1){
	Complex fp0;
	fp0.real = real + fp1.real;
	fp0.image = image + fp1.image;
	return fp0;
}

Complex Complex::operator-(Complex &fp1){
	Complex fp0;
	fp0.real = real - fp1.real;
	fp0.image = image - fp1.image;
	return fp0;
}

Complex Complex::operator*(Complex &fp1){
	double i, j;
	Complex fp0;
	i = real * fp1.real - image * fp1.image;
	j = real * fp1.image + fp1.real * image;
	fp0.real = i;
	fp0.image = j;
	return fp0;
}

void Complex::show() {
	ofstream fout("work.txt", ios::app);
	fout << real << endl;
	fout << image << endl;
}
Complex Complex::operator/(Complex &fp1){
	double k, i, j;
	k = fp1.real * fp1.real + fp1.image * fp1.image;
	i = (real * fp1.real + image * fp1.image) / k;
	j = (fp1.real * image - real * fp1.image) / k;
	fp1.real = i;
	fp1.image = j;
	return fp1;
}

ostream &operator<< (ostream &fo, Complex &fp){
	if (fp.image < 0) fo << fp.real << "+i(" << fp.image << ")\n";
	else fo << fp.real << "+i" << fp.image << "\n";

	return fo;
}

istream &operator>>(istream &fi, Complex &fp){
	cout << "¬ведите действительную часть: ";
	fi >> fp.real;
	cout << "¬ведите мнимую часть: ";
	fi >> fp.image;
	cout << endl;
	return fi;
}