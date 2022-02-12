#include <iostream>
using namespace std;

inline int func(int num1, int num2) {
	return (num1 + num2) / 2;
}

int MAX(int num1, int num2, int num3) {
	int max = num1;
	if (max > num2 && max > num3)
		cout << "Максимальное число: " ;
	else
		if (num2 > max && num2 > num3) {
			max = num2;
			cout << "Максимальное число: " ;
		}
		else
			if (num3 > max && num3 > num2){
				max = num3;
			cout << "Максимальное число: " ;
			}
	return max;
}
float MAX(float num1, float num2, float num3) {
	float max = num1;
	if (max > num2 && max > num3)
		cout << "Максимальное число:" ;
	else
		if (num2 > max && num2 > num3) {
			max = num2;
			cout << "Максимальное число: ";
		}
		else
			if (num3 > max && num3 > num2) {
				max = num3;
				cout << "Максимальное число: ";
			}
	return max;
}
double MAX(double num1, double num2, double num3) {
	double max = num1;
	if (max > num2 && max > num3)
		cout << "Максимальное число: ";
	else
		if (num2 > max && num2 > num3) {
			max = num2;
			cout << "Максимальное число: ";
		}
		else
			if (num3 > max && num3 > num2) {
				max = num3;
				cout << "Максимальное число: ";
			}
	return max;
}
template <typename T> T MAX2(T ar[], int len) {
	T max = ar[0];
	for (int i = 0; i < len; i++) {
		if (ar[i] > max)
			max = ar[i];
	}
	return max;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	cout << "Задача 1.\nСреднее арифметическое 2х чисел. Введите два числа:\n";
	cin >> n >> m;
	cout << func(n, m) << "\n\n";

	cout << "Задача 2.\nМаксимальное из 3х чисел.\n";

	cout << MAX(2, 3, 6) << endl;
	cout << MAX(2.2, 3.4, 6.1) << endl;
	cout << MAX(2.35, 3.45, 6.78) << "\n\n";

	cout << "Задача 3.\nМаксимальный элемент массива: ";
	int a[5] = { 1,2,3,4,5 };
	cout << MAX2(a, 5);

	return 0;
}