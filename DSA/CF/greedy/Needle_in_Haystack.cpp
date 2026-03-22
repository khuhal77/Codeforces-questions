#include <bits/stdc++.h>

using namespace std;

void solve() {
     string s ; 
     cin >> s ; 
     string t ; 
     cin >> t ; 
     
     vector<int> count(26,0) ; 

     for(char c : t){
        count[c - 'a']++ ; 
     }

     for(char c : s){
        count[c - 'a']-- ; 
        if(count[c -'a'] < 0){
            cout << "Impossible\n" ; 
            return ; 
        }
     }

     string result = ""; 
     result.reserve(t.size()) ; 

     for(char c : s){
        for(int i = 0 ; i < c - 'a' ; i++){
            while(count[i] > 0){
                result += (char)('a' + i ); 
                count[i]-- ; 
            }
        }
        result += c ; 
     }
     for(int i = 0 ; i < 26 ; i++){
        while(count[i] > 0){
            result += (char)('a' + i) ; 
            count[i]-- ; 
        }
     }
     cout << result << "\n" ; 
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