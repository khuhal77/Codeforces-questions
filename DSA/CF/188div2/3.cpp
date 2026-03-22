#include <iostream>
#include <numeric> // For std::gcd

using namespace std;

#include <iostream>

// Function to calculate GCD using the recursive Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: when the second number becomes 0, the first is the GCD
    } else {
        // Recursive call with b and the remainder of a divided by b
        return gcd(b, a % b);
    }
}


// Function to calculate LCM safely without early overflow
long long get_lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    long long a, b, c, m;
    cin >> a >> b >> c >> m;

    // Total individual visits
    long long n_a = m / a;
    long long n_b = m / b;
    long long n_c = m / c;

    // Calculate LCMs
    long long lcm_ab = get_lcm(a, b);
    long long lcm_ac = get_lcm(a, c);
    long long lcm_bc = get_lcm(b, c);
    long long lcm_abc = get_lcm(lcm_ab, c);

    // Overlapping visits
    long long n_ab = m / lcm_ab;
    long long n_ac = m / lcm_ac;
    long long n_bc = m / lcm_bc;
    long long n_abc = m / lcm_abc;

    // Apply the simplified Inclusion-Exclusion formula
    long long w_a = 6 * n_a - 3 * n_ab - 3 * n_ac + 2 * n_abc;
    long long w_b = 6 * n_b - 3 * n_ab - 3 * n_bc + 2 * n_abc;
    long long w_c = 6 * n_c - 3 * n_ac - 3 * n_bc + 2 * n_abc;

    cout << w_a << " " << w_b << " " << w_c << "\n";
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