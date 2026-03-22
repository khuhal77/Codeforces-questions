#include<iostream> 
#include<algorithm>
using namespace std; 


 void solve(){
    int n ; 
    cin >> n ; 

    string s ; 
    cin >> s ; 
    
    int ans = 0 ;
    bool f = false ; 
    int c = 0 ; 
    for(int i = n-1 ; i>=0 ; i--){
        if(s[i]=='1'){
            f = true; 
            break ; 
        }
        c++ ; 
    }
    ans = c ; 
    f = false ; 
    c = 0 ; 
    reverse(s.begin(),s.end());
    for(int i = n-1 ; i>=0 ; i--){
        if(s[i]=='1'){
            f = true; 
            break ; 
        }
        c++ ; 
    }
    ans = max(ans,c) ; 
    if(!f){
        cout << n << endl ; 
    }
    else {
        cout << (2*(n-c))<< endl ;
    }
    

    
 }
 int main(){ 

     int t ; 
     cin >> t; 

     while (t--)
     {
        solve();
     }

     return 0 ; 
 } 