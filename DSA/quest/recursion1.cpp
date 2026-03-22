#include <iostream> 
 using namespace std; 
 int count = 0 ;
 int N ; 
 void f(){
    if(count==4)
    return ; 
    cout << count << endl ;
    count++ ; 
    f() ; 
 }
     int main(){
      cin >> N ; 
        f() ;          
     return 0; 
 };