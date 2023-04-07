#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
     while(t--){
          int x,n;
          cin>>x>>n;
          if(x<=6){
              cout<<n<<endl;
          }
          else if(x%6 == 0){
              cout<<(x/6)*n<<endl;
          }
          else{
              cout<<((x/6)+1)*n<<endl;
          }
         
     }   
     return 0;
}
