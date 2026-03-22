#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;

            vector<char> k(n); 

            for (int i = 0; i < n; i++) {
                cin >> k[i];
            }

            bool possible = true;

            for(int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    
                    if (k[i] != 'r') possible = false;
                } else {
                 
                    if (k[i] != 'b') possible = false;
                }
            }

            if (possible) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}