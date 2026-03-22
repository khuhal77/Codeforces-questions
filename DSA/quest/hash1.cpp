#include <bits/stdc++.h>
 using namespace std; 
     int main(){
        int n = 7 ; 
         int arr[n] = {3,4,5,3,3,5,4} ; 
        
          
        //  pre-compute 
        int hash[13] = {0} ; 
        for(int i = 0 ; i< n ; i++){
            hash[arr[i]] += 1; 
        }
        cout << hash[4] << endl; 

     return 0; 
 };