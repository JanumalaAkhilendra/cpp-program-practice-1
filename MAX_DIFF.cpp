#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
     while(t--){
          int s,n;
          cin>>n>>s;
          if(s<=n){
               cout << s << endl;
               
          }
          else{
               cout<<n*2-s<<endl
               ;}
         
     }   
     return 0;
}
