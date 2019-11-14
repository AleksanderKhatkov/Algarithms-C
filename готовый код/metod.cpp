#include <iostream>
using namespace std;
/*1 подсчитать сумму чифр
  2 подсчитать роизвидение цифр
  3 сравниваем числа */

int main()
{
	int n1, n2, n3; int m1, m2, m3; int a, b;
	cout << "Write your number1:";
	cin >> a;
	cout << "Write your number2:";
	cin >> b;

	n1 = a / 100; //3
	n2 = a / 10 % 10; //2
	n3 = a % 10; //1
	m1 = b / 100; //3
	m2 = b / 10 % 10; //2
	m3 = b % 10; //1

	int sum1 = n1 + n2 + n3;
	int sum2 = m1 * m2 * m3;

	if (sum1 < sum2 or sum1>=sum2) 

		cout <<"True:" << sum1<< endl;
	else
		cout <<"False:" << sum2 << endl;
		

		return 0;
}

