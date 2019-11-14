#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    double a, b, c, d, x1, x2;
  
    cout << "Square Roots software. v1.0 by Sasha. in 18.10.2019"<<endl;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;
    
    if (a == 0) {
        cout << "Error! a = 0";
        return 1;
    }
    
    d = b * b - 4 * a * c;
    
    if (d < 0) {
        cout << "No roots";
    }
    else if (d == 0) {
        x1 = -b / (2 * a);
        cout << "Root: " << x1;
    }
    else {
        x1 = (-b + sqrt (d)) / (2 * a);
        x2 = (-b - sqrt (d)) / (2 * a);
        cout <<"Roots x1 = "<< x1 << " and x2 = "<< x2 << endl ;
    }
    
    return 0;
}
