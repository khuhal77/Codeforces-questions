#include<iostream> 
#include<cmath>
 using namespace std; 
 void solve(){
    int n ; 
    cin >> n  ;
    long long sum = 0 ; 
    while(n--){
        long long temp  ; 
        cin >> temp ; 
        sum += temp ;
    }
    long long root = round(sqrt((long double)sum)) ; 
    if((root * root == sum )){
        cout << "YES\n"  ; 
    }
    else {
        cout << "NO\n"  ; 
    }
    
 }
 int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int t ; 
     if((cin>>t)){
     while (t--)
     {
        solve() ; 
     }
    }

     return 0 ; 
 } 