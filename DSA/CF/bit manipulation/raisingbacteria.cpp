#include<iostream> 
 using namespace std; 
 int main(){ 
      int x ; 
      cin >>x ; 
      int cnt = 0 ; 
  while(x){
    x = (x & x-1) ;
    cnt++ ; 
  }
  cout << cnt << endl ;
     return 0 ; 
 } 