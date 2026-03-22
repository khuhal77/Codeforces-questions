#include<iostream> 
 using namespace std; 
 int nCr(int n , int r){
    if(r>n) return 0 ; 
    if(r==0 || r==n) return 1 ; 

    return ((nCr(n-1,r-1)) + (nCr(n-1,r))) ;

 }



 int main(){ 
      int t ; 
      cin >> t ; 

     while(t--){ 
        int n ; 
        cin >> n ; 
        int a[n] ; 
      for (int i = 0; i < n; i++)
      {
        cin >> a[i] ; 
      }     
    
        int ans = (nCr((10-n),2) * nCr(4,2)) ;

    cout << ans << endl ; 

}
     return 0 ; 
 } 