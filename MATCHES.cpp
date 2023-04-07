//Problem Code:MATCHES
//Contest Code:COOK110
#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
     while(t--){
          int A,B,C,arr[6],count=0;
          cin>>A>>B;
          C=A+B;
          for(int i=0;i<6,C>=1;i++){
                arr[i]=C%10;
                if(arr[i]==0 || arr[i]==9 || arr[i]==6){count+=6;}
                else if(arr[i]==2 ||arr[i]==3||arr[i]==5){count+=5;}
                else if(arr[i]==8){count+=7;}
                else if(arr[i]==4){count+=4;}
                else if(arr[i]==7){count+=3;}
                else{count+=2;}
                C=C/10;
                
          }
          
         cout<<count<<endl; 
         
     }   
     return 0;
}
