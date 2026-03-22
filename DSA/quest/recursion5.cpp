#include <iostream> 
 using namespace std; 
//  Sum of first n numbers 

void para(int i ,int sum){
    if (i < 1)
    {
        cout << sum << endl ;
        return ; 
    }
    else{
        sum += i ; 
        para(i-1 , sum+i) ;
    }    
}
     int main(){
        int N ; 
        cin >> N ;
          para(N,0); 
     return 0; 
 };