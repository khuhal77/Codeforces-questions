#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n ; 
    cin >> n ; 
    string s ; 
    cin >> s ; 
    
   int ts = 0 ; 
   for(char c : s){
    if(c == '1'){
        ts++ ; 
    }
   }
   if(ts == 0){
    cout << (n+2)/3 << "\n" ; 
    return ; 
   }
   int count = 0 ; 
   bool lead = true ;

   for (int i = 0; i < n; i++)
   {
    if(s[i]=='0'){
        count++ ; 
    }
    else{
        if(lead){
            ts += (count+1)/3 ; 
            lead = false ; 
        }
        else{
            ts += (count)/3 ; 
        }
        count = 0 ; 
    }
   }
   ts += (count + 1) / 3 ; 
   cout << ts << "\n"; 
    
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