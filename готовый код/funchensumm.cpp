/*Функция*/
#include <iostream>
using namespace std;

void function(int x1,int x2, int y1, int y2){
	cout << "Write yours cordinat"<<endl; 
	cout << "x1,x2"<<endl;  cout << "y1,y2";
	cin >> x1; cin >> x2; cin >> y1; cin >> y2;
	double sum = sqrt(pow((x1-x2),2) + (pow((y1-y2),2)));
	cout << sum;
}
int main(int x1, int x2, int y1, int y2)
{
	function(x1,x2,y1,y2);
	return 0;
}
