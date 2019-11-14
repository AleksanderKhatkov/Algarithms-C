#include <iostream>
using namespace std;
#define RATE 0.1484

/* Найти максимальное из трех чисел, введенных пользователем */

int main(){
    
    int a, b, c, max;
    
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;
    
if(a>b && a>c) max=a;
if(b>a && b>c) max=b;
if(c>a && c>b) max=c;

cout << max;
   
   return 0;
}
