#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
		while(n--){
	        int y1,m,k,d;
	        cin>>y1>>m>>k>>d;
	        
	        int elements=y1*(k-1);
	        int mobdays=y1*k+m;
	        int rem=d%mobdays;
	        if(rem==0 || (rem-elements)>0) {
	                cout<<"YES"<<endl;
	        }
	        else {
	                cout<<"NO"<<endl;
	        }
	}
	return 0;
}
