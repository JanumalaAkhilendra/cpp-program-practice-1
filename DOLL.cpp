//Problem Code:DOLL
//Contest Code:INFI2021
#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
     while(t--){
          int n,K,count=0;
          cin>>n>>K;
          int ar[n],i=0;
          for(int i=0;i<n;i++){
             cin>>ar[i];
             if(ar[i]>K) 
             count++;
        
          }
          
         cout<<count<<endl;
     }   
     return 0;
}
