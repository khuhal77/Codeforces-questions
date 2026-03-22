#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n, c, k;
    cin >> n >> c >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        if (a[i] <= c) {
 
            long long buff = min(k, c - a[i]);

            k -= buff;
 
            c += (a[i] + buff);
        } else {

            break;
        }
    }

    cout << c << '\n';
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}