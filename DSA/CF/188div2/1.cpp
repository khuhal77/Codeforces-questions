#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n ; 
    cin >> n ; 
    string s ; 
    cin >> s ; 
    
    int i = 0 ;
    int count = 0 ; 

    while(s[i]!='L'){
        count++ ; 
        i++ ; 
    }

    cout << count+1 << '\n' ; 
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