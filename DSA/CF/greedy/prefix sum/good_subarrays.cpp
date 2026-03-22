#include<iostream> 
#include<map>
 using namespace std;
 void solve(){
    int n ; 
    cin >> n ; 
    string s ; 
    cin >> s ; 

    map<int, long long> count ; 
    long long cs = 0 ; 
    long long ans = 0 ; 

    for(int i = 0 ; i < n ; i++){
        cs += (s[i]-'0') ; 
        int val = cs - (i + 1) ; 
        ans += count[val] ; 
        count[val]++ ;  
    }
    cout << ans << "\n" ; 
 }
 int main(){ 
     int t ;
     while(t--){
        solve();
     } 

     return 0 ; 
 } 