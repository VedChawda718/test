/*https://www.codechef.com/LP1TO201/problems/IMDB*/
/*above is the link for the problem statement*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	        
	    int n, x, a, s, res=0;
	    cin>>n>>x;
	    
	    for(int i=0; i<n; i++){
	        cin>>a>>s;
	        if(a<=x)
	            res = max(res, s);
	    }
	    cout<<res<<endl;
        t--;
	}
	return 0;
}