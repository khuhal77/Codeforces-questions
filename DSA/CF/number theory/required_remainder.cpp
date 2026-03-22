#include <iostream>
using namespace std;

void solve() {
    long long x, y, n;
    cin >> x >> y >> n;

    // Calculate remainder of n
    long long rem = n % x;

    if (rem == y) {
        // If remainder matches y, n is the answer
        cout << n << endl;
    } 
    else if (rem > y) {
    
        cout << n - (rem - y) << endl;
    } 
    else { 
        cout << n - (rem + x - y) << endl;
    }
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}