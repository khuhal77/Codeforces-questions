#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n ; 
    cin >> n ;
    
    int m = ( n * ( n - 1 ) ) / 2 ;  
    vector<long long> b(m) ;
    for(int i = 0 ; i < m ; i++) cin >> b[i];

    sort(b.begin(), b.end());

    int x = n - 1 , i = 0 ; 
    while(x > 0 ){
        cout << b[i] << " " ; 
        i += x ; 
        x-- ; 
    }
    cout << "1000000000\n" ;
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