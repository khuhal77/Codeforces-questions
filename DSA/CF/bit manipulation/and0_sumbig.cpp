#include<iostream> 
 using namespace std; 
 int main(){ 
     int t;  
     cin >> t; 
     while(t--){
        int n ; 
     cin >> n ; 
    if(n<=4){
        cout << 1 << endl ; 
    }
    else{
     int x = n / 4 ; 
     int y = n % 4 ; 
     cout << x + (y/2) << endl ;  
    }
     }

     return 0 ; 
 } 