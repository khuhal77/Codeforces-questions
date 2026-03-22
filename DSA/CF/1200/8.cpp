#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b , c ; 
    cin >> a >> b >> c ; 
    if((a + (c%2)) > b){
        cout << "First\n" ; 
    }
    else{
        cout << "Second\n" ; 
    }

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