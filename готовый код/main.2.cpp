#include <iostream>
using namespace std;
#define RATE 0.1484

/*Нахожденя температуры */

int main() {
    
   int t = 0;
   
  cout << "Input temperature: ";
  cin >> t;
  
  if(t > 17)
  
    cout << "Warm!";
  else 
    cout << "Cold!";
    
  return 0;
}

