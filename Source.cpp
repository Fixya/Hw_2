﻿#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*Boolean15◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Ровно два из чисел A, B, C являются положительными».*/
/*int A;
int B;
int C;
bool res;
cin >> A;
cin >> B;
cin >> C;
res = ((A > 0) && (B > 0) && (C < 0)) || ((A < 0) && (B > 0) && (C > 0)) || ((A > 0) && (B < 0) && (C > 0));
cout << boolalpha << res << endl;*/

/*Boolean16◦
. Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».*/
      /*int A;
		bool res;
			cin >> A;
			res = ((A % 2) == 0) && ((A / 10) != 0) && ((A / 100) == 0) && (A > 0);
			cout << boolalpha << res << endl;*/

/*Boolean17◦
. Дано целое положительное число. Проверить истинность высказывания: «Данное число является нечетным трехзначным».*/
/*int A;
bool res;
cin >> A;
res = ((A % 2) != 0) && ((A / 100) != 0) && ((A / 1000) == 0) && (A > 0);
cout << boolalpha << res << endl;*/

	/*Boolean20◦. Дано трехзначное число. Проверить истинность высказывания: «Все цифры данного числа различны».*/
	/*int A;
	bool res;
	cin >> A;
	int a;
	a =  A / 100;
	int b;
	b = A % 10;
	int c;
	c = (A % 100) / 10;
	res = ((A / 100) != 0) && ((A / 1000) == 0) && a != b && a != c && b != c;
	cout << boolalpha << res << endl;*/

	/*Boolean21◦. Дано трехзначное число. Проверить истинность высказывания: «Цифры данного числа образуют возрастающую последовательность».*/
	/*int A;
	bool res;
	cin >> A;
	int a;
	a = A / 100;
	int b;
	b = A % 10;
	int c;
	c = (A % 100) / 10;
	res = ((A / 100) != 0) && ((A / 1000) == 0) && a < c && c < b;
	cout << boolalpha << res << endl;*/
}