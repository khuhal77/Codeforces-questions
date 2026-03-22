#include<iostream> 
 using namespace std; 
 int main(){ 
    int t ; 
    cin >> t ; 
    while (t--)
    {
        int x , y  ;
        cin >> x >> y ; 

        int df = (x^y) ;
        int ans = (df & -df) ; 
        cout << ans << endl ; 
    }
    return  0;
 } 