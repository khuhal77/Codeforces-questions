#include <iostream> 
 using namespace std; 
//  Functional Recursion  
 int sum(int n){
        if(n==0){return 0;}
        else{return n+sum(n-1);}
 }
  
 int fact(int n){
    if(n==0) return 1; 
    else return n*fact(n-1) ; 
 }

 int main(){
        //   cout << sum(5);
          cout << fact(0);
 };