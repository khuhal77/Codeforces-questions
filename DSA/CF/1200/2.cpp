#include <bits/stdc++.h>

using namespace std;

void solve() {
     int n ; 
     cin >> n ; 
     vector<long long> a(n) ;
     for( int i = 0 ; i < n ; i++ ) cin >> a[i] ; 

     long long ans = 0 ;
     
     for(int i = 1 ; i<=60 ; i++){
         set<long long> dist ; 
         long long k = 1LL << i ; 

        for(int j = 0 ; j < n ; j++){
            dist.insert(a[j]%k) ; 
        }

        if(dist.size()==2){
            ans = k ; 
            break ; 
        }
    }
    cout << ans << "\n" ; 
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}