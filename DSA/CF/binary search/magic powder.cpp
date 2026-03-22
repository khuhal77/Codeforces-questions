#include<iostream> 
#include<vector>
#include<algorithm>
 using namespace std; 

bool check(int n , int k , vector<int>&a , vector<int>&b , int m ) {
    for (int i = 0; i < n; i++)
    {
        int r = a[i]*m ; 
        r -= b[i] ; 
        if(r>0){
            if(k>=r){
                k -= r ;
            }
            else{
                return false ; 
            }
        }
    }
    return true ; 
    
}

 int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int n , k ; 
    cin >> n >> k ; 

    vector<int> a(n) ; 
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ; 
        cin >> b[i] ;
    }

    int ans = 0 ; 
    int l = 0 , h = 5000 ; 
    while(l<=h){
        int m = l + (h-l)/2 ; 
        if(check(n,k,a,b,m)){
            ans = m ;
            l = m + 1 ;  
        }
         else h = m - 1; 
    }
     cout << ans << "\n" ;

     return 0 ; 
 } 