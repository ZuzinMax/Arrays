#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Shift.h"
#include"Sort.h"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int number_of_shifts;
	FillRand(arr, n);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	Sort(arr, n);
	/*cout << "Введите кол-во сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите кол-во сдвигов: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);*/
	/*Print(arr, n);*/

	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);

	const int D_SIZE = 5;
	double d_brr[SIZE];
	FillRand(d_brr, D_SIZE);
	Print(d_brr, D_SIZE);

	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}