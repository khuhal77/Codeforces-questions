#include <iostream> 
 using namespace std; 
//  Printing number 5 times using recursion 
 int count = 1 ;
 void name(){
   if (count == 5)
   {
    cout << "khushal" << endl ; 
   }
    else {
    cout << "khushal" << endl ; 
    count = count + 1 ; 
    name();
   }   
 }
     int main(){
          name() ; 
     return 0; 
 };