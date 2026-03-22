#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n , m ; 
    cin >> n >> m ;
    vector<vector<long long>> v(m , vector<long long>(n)) ; 
    for(int j = 0 ; j < n ; j++){
        for (int i = 0; i < m; i++)
        {
            cin >> v[i][j];
        }        
    }
    for(int i = 0 ; i < m ; i++){
        sort(v[i].begin(),v[i].end());
    }

    long long ans = 0 ;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans -= (v[i][j] * (n - j - 1));
            ans += (v[i][j] * j);
        }
        
    }
        cout << ans << '\n' ; 
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