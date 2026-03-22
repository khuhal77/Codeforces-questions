#include<iostream> 
#include<set>
#include<string>
#include<unordered_map>
 using namespace std; 
void solve() {
    int n; 
    cin >> n;

    string s; 
    cin >> s; 

    
    unordered_map<char, char> a;

    set<char> uc(s.begin(),s.end()) ;
    string r(uc.begin(),uc.end());

    int m = r.length();
    for(int i = 0; i < m; i++) {
        a[r[i]] = r[m - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[s[i]] ;
    }
    
    cout << endl ; 
        

}


 int main(){ 
      int t; 
      cin >> t ; 

      while(t--){
        solve();
      }

     return 0 ; 
 } 