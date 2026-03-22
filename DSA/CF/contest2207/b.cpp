#include <bits/stdc++.h>

using namespace std;

bool check(long long x , int n , int m , const vector<int>& intv){
        long long mc = (1LL * m * x) ; 
        long long tc = mc ; 

        for(int i = 0 ; i < intv.size() ; i++){
           long long dt = intv[i] ; 
           tc -= dt  ;

           if(tc < 0) return false ; 

           if( i < intv.size() - 1){
           long long lc = tc/m ; 

            tc += (x - lc) ; 
            if(tc > mc){
                 tc = mc ;
            }
           }
            
        }
        
        return true ; 

}

void solve() {
     int n , m , l ; 
     cin >> n >> m >> l ; 

     vector<int> a(n) ; 

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ; 
    }

    
    vector<int> intv ;
    
    int lt = 0 ; 
    
    for(int i = 0 ; i < n ; i++){
        intv.push_back(a[i] - lt) ; 
        lt = a[i] ; 
    }
    intv.push_back(l - lt ); 
    reverse(intv.begin() , intv.end()) ; 

    int low = 0 , high = l , ans = l ; 
    while(low <= high){
       int mid = low + (high - low)/ 2 ; 

       if(check(mid,n,m,intv)){
            ans = mid ;
            high = mid - 1 ;
       }
       else{
        low = mid + 1; 
       }
    }
    cout << ans << "\n" ; 
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