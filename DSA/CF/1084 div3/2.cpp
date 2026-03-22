#include <bits/stdc++.h> 
 #include<iostream> 
 using namespace std; 
 void solve(){
    int n ; 
    cin >> n ; 

    vector<int> a(n) ; 
    for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
    bool res = true ; 
    for (int i = 0; i < n -1 ; i++)
    {
        if(a[i] > a[i+1]){
            res = false ; 
        }
    }
    if(res == true){
        cout << n << "\n" ; 
    }
    else{
        cout << 1 << "\n" ; 
    }
 
 }
 int main(){ 
     int t ; 
     cin >> t ; 
     while(t--) solve() ;  

     return 0 ; 
 } 