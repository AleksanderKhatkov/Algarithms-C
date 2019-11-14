#include <iostream>
using namespace std;
/*1 написать подсчет через сколько дней убет мутанотов
  2 подсчитать процент прироста мутантов 
  3 проверяем на пложительный результат если результат положительный то сичитаем дни эпидемии*/

int main()
{
	double m, n, p, t=1;
	cout << "An epidemic has begun" <<endl;
	cout << "mutants:";     cin >> m;            
	cout << "defenders:";   cin >> n; 
	cout << "percent:";     cin >> p; 
	 

	while (m > 0) {//1
		m = m - n;
		m = m + (p / 100); //2
		t++;
	}
	if (m < 0) { //3
		
		cout << "Mutants raged for so many days " << t << endl;
	} else
		cout << "Number is not a positive error"<<endl;
}

