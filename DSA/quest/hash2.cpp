#include <iostream> 
 using namespace std; 
 int count = 0 ; 
//  void shash(char c , string s){
//     int n = s.size() ; 
//     for(int i = 0 ; i<n ; i++){
//         if(s[i]==c){
//             count++ ; 
//         }
//     }
//  }

int main(){
         string k = "khushal" ; 
        //  shash('u' , k);
        // pre compute 
        int hash[26] = {0}; 
        for(int i = 0 ; i< k.size() ; i++){
            hash[k[i]-'a']++ ; 
        }
         cout << hash[7] ;
     return 0; 
 }