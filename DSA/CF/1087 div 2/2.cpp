#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n  ;
    cin >> n ;
    vector<int> a(n) ;
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    for (int i = 0; i < n; ++i) {
        int count_greater = 0;
        int count_smaller = 0;
        
        for (int j = i + 1; j < n; ++j) {
            if (a[j] > a[i]) {
                count_greater++;
            } else if (a[j] < a[i]) {
                count_smaller++;
            }
        }
        
        cout << max(count_greater, count_smaller) << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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