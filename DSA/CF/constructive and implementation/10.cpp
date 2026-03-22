#include<iostream> 
 using namespace std; 
 int main(){ 
     string in ; 
     cin >> in ; 
     string sum = "" ;
     for(int i = 0;i<in.size();i++){
        char t = in[i] ;
        int y = in[i]-'0';   
        int x = 9 -y ;
      sum += (min(y,x) + '0') ; 
     } 
     if(sum[0]=='0'){
        sum[0] = '9';
     }
     cout << sum << "\n" ; 
    return 0 ; 
 } 