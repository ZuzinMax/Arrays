#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	cout << "������� �������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "�������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	cout << "�������� ������� � �������� �������: ";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int summ = 0;
	cout << "����� ��������� �������: ";
	for (int i = 0; i < n; i++)
	{
		summ = summ + arr[i];
	}
	cout << summ << endl;

	double mid;
	cout << "������-�������������� ��������� �������: ";
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
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;
}