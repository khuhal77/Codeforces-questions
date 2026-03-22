#include <bits/stdc++.h>

using namespace std;

void solve() {
     int n ; 
     cin >> n ; 
     string s ; 
     cin >> s; 

     int mn = 0 ; 
     int mx = 0 ; 

     for (int i = 1; i < n - 1; i++)
     {
        if(s[i-1] == '1' && s[i+1] == '1'){
            s[i] = '1' ;
        }
     }

     for (int i = 0; i < n; i++)
     {
        if(s[i] == '1'){
            mx++ ; 
        }
     }

     for (int i = 1; i < n - 1 ; i++)
     {
        if(s[i-1] == '1' && s[i+1] == '1'){
            s[i] = '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1' ){
            mn++ ; 
        }
    }

    cout << mn << " " << mx << "\n" ; 
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