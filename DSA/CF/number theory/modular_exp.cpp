#include<iostream> 
 using namespace std; 
 int main(){ 
     int n , m ; 
     cin >> n ;
     cin >> m ; 

     if(n >= 27){
        cout << m << endl ; 
     }
     else { 
        long long pow = 1LL << n ;
        cout << m % pow << endl ; 
     }

     return 0 ; 
 } 