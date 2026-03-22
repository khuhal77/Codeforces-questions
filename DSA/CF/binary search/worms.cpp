#include<iostream> 
#include<vector>
 using namespace std; 


 int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n;
    cin >> n ; 

    vector<int> a(n);
    
    for(int i = 0 ; i<n ; i++){
        cin >> a[i] ; 
    }
    // prefix sum   
    for(int i = 1 ; i<n ; i++){
        a[i]+= a[i-1] ; 
    }

    int m ; 
    cin >> m ; 

    while(m--){
        int q ; 
        cin >> q ; 
        int lb = lower_bound(a.begin() , a.end() , q) - a.begin() ;
        cout << lb + 1 << endl ; 
    }


     return 0 ; 
 } 