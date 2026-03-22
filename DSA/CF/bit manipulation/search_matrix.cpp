#include<iostream>
#include<vector> 
 using namespace std; 
 void bs(int j , int k , vector<vector<int> > a , int x){
        int l = 0 , h = k ;
        for(int i = 0 ; i < j ; i++){
            for (int j = 0; j < k; j++)
            {
                if(a[i][j]==x){
                    cout << "will take number" <<endl ;
                    return ; 
                }
            }
            
        }
        cout << "will not take number" << endl ; 
        return ; 
 }
 int main(){ 
     int n, m ; 
     if(!(cin >> n >> m ))return 0 ;
     vector<vector<int> > a(n , vector<int>(m)) ;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j] ; 
        }
       
    }
    int x; 
    cin >> x; 
    bs(n,m,a,x);

     return 0 ; 
 } 