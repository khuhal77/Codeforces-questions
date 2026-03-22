#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; 
    cin >> n; 

    vector<long long> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    n = unique(a.begin(),a.end()) - a.begin() ; 
    if(n == 1){
        cout << 1 << '\n' ; 
        return ; 
    }
    int ans = 2; 
    for(int i = 1 ; i < n - 1; i++){
        if(a[i] > a[i-1] && a[i] > a[i+1] || a[i] < a[i-1] && a[i] < a[i+1]){
            ans++ ; 
        }
    }
    
    cout << ans << "\n";
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