#include <iostream>
using namespace std;
#define RATE 0.1484


/*Прогорамма для расчета эл энергии */

int main() {
    
    int cur  = 0;
    int prev = 0;
    double cost;
    
    cout << ("Input current meter index (kwt):");
    cin >> cur;
    cout << ("Input current meter index (kwt):");
    cin >> prev;
    
    cost = (cur - prev) * RATE;
    
    cout << "Cost of electricity is " << cost << " BYN ";

 
  return 0;
}

