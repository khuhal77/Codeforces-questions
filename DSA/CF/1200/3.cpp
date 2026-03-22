#include <bits/stdc++.h>

using namespace std;

long long lcm(long long num1, long long num2) {
	
	return (num1 * num2) / (__gcd(num1, num2));

}

long long summ(long long start , long long end ){
    long long sum = ((start+end)*(end-start+1))/2 ;
    return sum ; 
}

void solve() {
    long long n , x , y ; 
    cin >> n >> x >> y ; 

    long long lcmm = lcm(x,y) ; 
    long long count1 = (n/x) - (n/lcmm) ; 
    long long count2 = (n/y) - (n/lcmm) ; 

    long long sum1 = summ(n-count1 + 1 , n); 
    long long sum2 = summ(1LL , count2) ; 
    

    cout << (sum1 - sum2) << '\n';
     
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