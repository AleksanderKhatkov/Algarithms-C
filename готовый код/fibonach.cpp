/* Функция Фибиочи 1,1,2,3,5,8,13*/
#include "pch.h"
#include <iostream>
using namespace std;

int Fibonacci(int n);
int main()
{
	int n;
	cout << "Dear user, input n > 0: ";
	cin >> n;
	cout << "Ok, " << n << "th element of Fibonacci row is " <<Fibonacci(n);
	Fibonacci(2);
	return 0;
}

int Fibonacci(int n) {

	int step = 2, a = 1, b = 1, res = 0;

	if (n == 0) return 0;
	if (n == 1 or n == 2) return 1;


	while (step < n) {
		res = a + b;
		a = b;
		b = res;
		step++;
	}
	return res;
}


