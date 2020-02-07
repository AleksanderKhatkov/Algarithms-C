/*Задание на пятницу:
TECH:
1. Разработайте функцию, которая возвращает индекс наибольшего элемента в переданном ей массиве
2. Разработайте функцию линейного поиска
3. Разработайте функцию бинарного поиска
* Вопрос для обсуждения: какой поиск лучше использовать?*/

#include <iostream>
using namespace std;
#define N 5
#define KEY 9
void PrintArray(int a[], int n);
void InitArray(int a[], int n);
int MaxArray(int a[], int n);
void SortArray(int a[], int n);
int LinearSearch(int a[], int n, int key);
int BinSearch(int a[], int n, int key);

int main()
{
	int i, j, temp, arr[N];
	InitArray(arr, N);
	PrintArray(arr, N);
	cout << "MaxArray : " << MaxArray(arr, N) << endl;
	SortArray(arr, N);
	PrintArray(arr, N);
	cout << "LinearSearch: " << LinearSearch(arr, N, KEY) << endl;
	cout << "BinSearch: " << BinSearch(arr, N, KEY);
	return 0;
}

void PrintArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

}
void InitArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;
	cout << endl;
}

int MaxArray(int a[], int n) // макc элемент массива
{
	int max = 0;
	for (int i = 0; i < N; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

void SortArray(int a[], int n) // сортировка пузырьком
{
	int i, j, temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int LinearSearch(int a[], int n, int key) // линейный поиск
{
	int i = 0;
	for (i = 0; i < n; i++)
		if (a[i] == key)
			break;
	return i < n ? i : -1;
}

int BinSearch(int a[], int n, int key) //бинарный поиск
{
	for (int i = 0; i < n; i++) {

		int l = 0;
		int R = n - 1;

		int m = (l + R) / 2;
		if (key == a[i]) 

			return i;
	
		else if (key < a[i])
			R = i;
		else
			l = i;
	}
	return -1;
}
