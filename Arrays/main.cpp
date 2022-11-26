#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "Элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	cout << "Элементы массива в обратном порядке: ";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int summ = 0;
	cout << "Сумма элементов массива: ";
	for (int i = 0; i < n; i++)
	{
		summ = summ + arr[i];
	}
	cout << summ << endl;

	double mid;
	cout << "Средне-арифметическое элементов массива: ";
	mid = summ / n;
	cout << mid << endl;

	int min, max;
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}