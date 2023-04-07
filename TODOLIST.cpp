//Problem Code:TODOLIST  Contest Code:LTIME108
#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
    	while(t--){
	    int d,b{0};
	    cin>>d;
	    while(d--){
	        int k;
	        cin>>k;
	        if(k>=1000){
	            b++;
	        }
	    }
	    cout<<b<<endl;
	}
     return 0;
}
