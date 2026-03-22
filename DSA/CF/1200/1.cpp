#include <bits/stdc++.h>

using namespace std;

void solve() {
     int n ; 
     cin >> n ;
     vector<pair<int,int>> a(n), b(n), c(n) ; 
     
     for (int i = 0; i < n; i++)
     {
        cin >> a[i].first ; 
        a[i].second = i ; 
     }
     
      for (int i = 0; i < n; i++)
     {
        cin >> b[i].first ; 
        b[i].second = i ; 
     }
      for (int i = 0; i < n; i++)
     {
        cin >> c[i].first ; 
        c[i].second = i ; 
     }

     sort(a.rbegin(),a.rend());
     sort(b.rbegin(),b.rend());
     sort(c.rbegin(),c.rend());

     int mxf = 0 ;
    
     for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if(a[i].second != b[j].second && 
                b[j].second != c[k].second && 
                c[k].second != a[i].second)
                {
                    int cs = a[i].first + b[j].first + c[k].first ; 
                    mxf = max(mxf , cs);

                }
            }
            
        }
        
     }
     
     cout << mxf << "\n" ; 

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