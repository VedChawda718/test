/*Chef has taken his first dose of vaccine DD days ago. 
He may take the second dose no less than LL days and no more than RR days since his first dose.

Determine if Chef is too early, too late, or in the correct range for taking his second dose.*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int d,l,r;
	    cin>>d>>l>>r;
	    
	    if(d>=l&&d<=r){
	        cout<<"Take second dose now"<<endl;
	    }else if(d>r)
	        cout<<"Too Late"<<endl;
	    else
	        cout<<"Too Early"<<endl;
	        t--;
	}
	return 0;
}