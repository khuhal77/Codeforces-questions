#include<iostream> 
 using namespace std; 
 void binary_decimal(string b){
   int n = b.size();
   int p = 1 ; 
   int dec = 0 ; 
   for(int i = n-1 ; i>=0 ; i--){
      if(b[i]=='1'){
         dec += p ; 
      }
      p *= 2;  
   }
   cout << dec << endl; 
 }
 int main(){ 
   string n ; 
   cin >> n ; 

    binary_decimal(n);
     return 0 ; 
 } 