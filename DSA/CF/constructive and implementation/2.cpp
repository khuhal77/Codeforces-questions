#include<iostream> 
#include<vector>
 using namespace std; 
 int count = 0 ;
    void solve(vector<int> k, int n){
        size_t i = 0 , j = 0 ;
        while (j<=n)
        {
           if(i<=j){ 
            if(k[i]<=k[j]){
                count++ ;
            }
            j++;
            }
            else{
                i++ ; 
            }
             
        }
        }
     int main(){
        int t ; 
        int n ; 
        int z ; 
        cin >> t ; 
        vector<int> k(n,z) ;
        for (int i = 0; i <= t; i++)
        {
           cin >> n ;
           cin >> z ;
        }
        solve(k,n);
        cout << count << endl ; 
     return 0; 
 }