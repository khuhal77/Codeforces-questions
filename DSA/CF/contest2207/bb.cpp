#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n , m , l ; cin >> n >> m >> l ; 
    vector<int> a(n) ; for(auto &A : a) cin >> A ;  

    int idx = 0 ; 
    m = min(m , n - idx + 1) ; 
    vector<int> vals(m) ; 

    for(int t = 1 ; t <= l ; t++){        
            ++*min_element(vals.begin(),vals.end()) ;             
        if(idx < n && t == vals[idx]){
            idx++ ; 
            vals.erase(vals.begin()) ; 
            m = min(m , n - idx + 1) ; 
            vals.resize(m , 0) ; 
        }
    }
        assert(idx == n );
        assert(m == 1 ); 
        cout << vals[0] << '\n';
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