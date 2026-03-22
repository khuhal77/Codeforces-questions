#include <iostream>

using namespace std ; 
void print1(int n){
     for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << "*" ; 
        }
        cout << endl ;
    }
}
void print2(int n){
     for(int i = 0; i < n ; i++){
        for(int j = 0 ; j<= i ; j++){
            cout << "* " ; 
        };
        cout << endl ;
    }
}
void print3(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j =0 ; j <= i ; j++){
            cout << j+1 ;         
        }
        cout << endl ; 
    }
 }
void print4(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j =0 ; j <= i ; j++){
            cout << i ;         
        }
        cout << endl ; 
    }}
void print5(int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i+1; j++)
        {
            cout << "* " ; 
        }
        cout << endl ; 
    }
}
void print6(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << j + 1 << " " ; 
        }
        cout << endl ;        
    }}
void print7(int n){
        for(int i = 0 ; i<n ; i++){
            for(int k=0 ; k<n-i; k++){
               cout << "   " ; 
           }
            for (int j = 0; j < (2*i)+1; j++)
            {
               cout << " * " ;
            }
            cout << endl ;             
        }
}
void print8(int n ){
    for(int i = 0 ; i<n ; i++){
            for(int k=0 ; k<i; k++){
               cout << " " ; 
           }
            for (int j = 0; j < n-i; j++)
            {
               cout << " * " ;
            }
            for(int m=0 ; m<i; m++){
               cout << " " ; 
           }
            cout << endl ;             
        }
}
void print9(int n ){
     for(int i = 0 ; i<n ; i++){
            for(int k=0 ; k<n-i; k++){
               cout << " " ; 
           }
            for (int j = 0; j < i; j++)
            {
               cout << " * " ;
            }
            for(int k=0 ; k<n-i; k++){
               cout << "  " ; 
           }
            cout << endl ;             
        }
         for(int i = 0 ; i<n ; i++){
            for(int k=0 ; k<i; k++){
               cout << " " ; 
           }
            for (int j = 0; j < n-i; j++)
            {
               cout << " * " ;
            }
            for(int m=0 ; m<i; m++){
               cout << " " ; 
           }
            cout << endl ;             
        }
}
int main(){
   int n ;
   cin >> n ; 
   print9(n) ; 
}