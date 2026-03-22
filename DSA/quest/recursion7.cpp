#include <bits/stdc++.h>
 using namespace std; 
 void subset(int i , vector<int>& num , int arr[]){
        int n = sizeof(arr);
        if(i>=n){
            for(auto it : num){
                cout << it << " " ; 
            }
            cout << endl ; 
            return ; 
        }
        num.push_back(arr[i]) ; 
        return subset(i+1 , num , arr) ; 
        num.pop_back() ;
        return subset(i+1 , num , arr) ; 
 }
     int main(){
        int arr[] = {3,1,2} ; 
        vector<int> ds ; 
          subset(0 , ds , arr) ; 
     return 0; 
 };