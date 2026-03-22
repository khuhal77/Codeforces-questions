#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n; 

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    int count = 0 ; 
    if(n > 0){
        int cm = a[0] ; 
        count = 1 ; 

        for(int i = 1 ; i<n ; i++){
            if(a[i] >= cm){
                count++ ; 
                cm = a[i]; 
            }
        }
    }
    cout << count << '\n';
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