#include<iostream> 
#include<vector>
 using namespace std; 
 void solve(){
    int n ; 
    cin >> n; 
    vector<long long> b(n) ; 
    for (int i = 0; i < n; i++)
    {
        cin >> b[i] ;
    }
    int i = 0 , j = n - 1 ;
    while(i <= j){
        if(i == j){
            cout << b[i] ;            
        }
        else{
             cout << b[i] << " " << b[j] << " " ; 
        }
        cout << endl ; 
        i++ ; j-- ; 
    }

 }
 int main(){ 
     int t ; 
    cin >> t ; 
    while (t--)
    {
        solve(); 
    }
 

     return 0 ; 
 } 