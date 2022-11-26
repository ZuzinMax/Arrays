#include"stdafx.h"

void Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += +arr[i];
	}
	cout << sum << endl;
}

void Avg(int arr[], const int n)
{
	double mid;
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += +arr[i];
	}
	mid = sum / n;
	cout << mid << endl;
}

void minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min << endl;
}

void maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max << endl;
}