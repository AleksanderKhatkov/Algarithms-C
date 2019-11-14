#include <iostream>
using namespace std;

/* нахождения реда 1,2,4,7,11,16,22,29,37,46*/

int main(){
    
   int n = 0, x;
   
   while (n < 10) {
       
     n = n + 1;
     
     x = n * (n - 1) / 2 + 1;
     
     
      cout << " " << x; 
     
       
   }
    
    return 0;
}