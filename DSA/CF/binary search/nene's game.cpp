#include<iostream> 
#include<vector>
#include<algorithm>
 using namespace std; 
 void solve(){
    long long k , nq ; 
    cin >> k >> nq ; 
    vector<long long> a(k) ; 
    for(int i = 0 ; i < k ; i++){ 
        cin >> a[i] ;
    }
    for(int i = 0 ; i < nq ; i++){
        long long q; 
        cin >> q; 
        cout << min(a[0]-1,q) << " " ; 
    }
    cout << endl ;
    
 }
 int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t; 
     cin >> t ; 
     while(t--){
        solve();
     } 

     return 0 ; 
 } 