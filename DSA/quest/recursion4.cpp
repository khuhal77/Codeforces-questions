#include <iostream> 
 using namespace std; 
//  printing N to 1 ; 
int N , num = 1; 
void rcount(){
    if(num == N){
        cout << N << endl ;
     } else{
        cout << N << endl ; 
        N-- ; 
        rcount() ; 
     }

}
     int main(){
          cin >> N ; 
          rcount() ; 
     return 0; 
 };