#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
   int mx = *max_element(a.begin() , a.end()) ; 
   
    if(mx == 0){
        cout << 0 << "\n";
    }
    else{
        int count = 0 ;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==mx){
                count++ ; 
            }
        }        
        cout << count << "\n" ; 
    }
   }


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}