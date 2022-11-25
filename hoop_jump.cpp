/*https://www.codechef.com/LP1TO201/problems/HOOPS*/
/*Above is the link for the problem statement*/
/*when i tried it first the output was correct but the time complexity was not meeting it's requirements since i applied the for loop 
but the same question could be solved without the loop so i checked the solution the 2nd code is the meeting the time complexity required 
and also the correcxt ans*/

#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t>0){
    int n;
    cin>>n;

    if(n%2!=0){
    for(int i =0; i<n; i++){
        if(2*i+1>=n){
            cout<<i+1<<endl;
            break;
        }
    }

    }
    t--;

}
return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
cin>>t;

while(t>0){
    int n;
    cin>>n;

    if(n%2!=0){
        cout<<(n/2)+1<<endl;
    }
    t--;

}

return 0;
}