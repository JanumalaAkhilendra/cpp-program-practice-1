//Problem Code:RECENTCONT
//Contest Code:START39
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, s=0, l=0;
	    cin >> n;
	    string temp;    
	    while(n--){
	        cin>>temp;
	        if(temp == "START38") s++;
	        else if(temp == "LTIME108") l++;
	    }
	    cout << s << " " << l << endl;
	}
	return 0;
}
