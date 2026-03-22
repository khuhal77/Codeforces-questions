#include <iostream> 
 using namespace std; 
 int num = 1 ; 
 int N ; 
 void count(){
    if(num == N)
    {cout << num << endl ;
    } else{
        cout << num << endl ;
        num++ ; 
        count() ; 
    }
 }
     int main(){
          cin >> N ; 
          count() ; 
     return 0; 
 };