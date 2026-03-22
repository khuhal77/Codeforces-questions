#include<bits/stdc++.h> 
 using namespace std; 
     
 void subarr(vector<int>&nums){
    int n = nums.size();
    int count = 0 ; 
    for(size_t j = 0 ; j<n ; j++){
        for(int i = 0 ; i<=j ; i++){
            if(nums[i]<=nums[j]){
                count++ ; 
            }
        }
    }
    cout << count ; 
 }

     int main(){
         int t,n;
         cin >> t ; 
        vector<int> k(n);
         for (int i = 0; i < t; i++)
         {  
            cin >> n ; 
            for(int i = 0 ; i < n ; i++){
                cin >> k[i];
            }
         }
        subarr(k);          
     return 0; 
 }