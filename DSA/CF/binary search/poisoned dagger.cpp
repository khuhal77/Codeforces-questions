#include<iostream> 
#include<vector>
 using namespace std; 

 bool check(long long k , int n , long long h , const vector<int> &a ){
    long long dmg = 0 ; 
    for(int i = 0 ; i < n-1 ; i++ ){
       long long df = a[i+1]-a[i] ; 
       if(df<k){
            dmg += df; 
       }
       else {
        dmg += k ; 
       }
       dmg += k ; 
       return dmg >= h ; 
    }
    

 }

 int main(){ 
      int t ; 
      cin >> t ; 
      while(t--){
         int n  ;
         long long h ; 
         cin >> n >> h ;

         vector<int> a(n) ;
         for (int i = 0; i < n; i++)
         {
             cin >> a[i] ; 
         }

         long long ans = h ;
         long long low = 1 , high = h ; 

         while(low<=high){
             int k = low + (high-low)/2 ; 
             if(check(k,n,h,a)){
                 ans = k ; 
                 high = k - 1 ;
             
             }
             else  low = k + 1 ; 
         }
         cout << ans << endl ;
     
      }

     return 0 ; 
 } 