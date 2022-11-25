/*Chef prepared two dishes yesterday. Chef had assigned the tastiness T1 and T2 to the first and to 
the second dish respectively. The tastiness of the dishes can be integer between 0 to n(both inclusive)

unfortunately, Chef has forgotten the values of T1 and T2 that he had assigned to the dishes.
howver, he remembers the sum of the tastiness of both the dishes - denoted by S.
Chef wonders , what can be the maximum possible absolute difference between the tastiness of the two dishes . Can you help the chef in finding the maximum absolute difference ?*/



#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
    int n, s;
    cin>>n>>s;

    if(n>=s){
        cout<<s<<endl;
    }
   else{
    int diff =s-n;
        cout<<n-diff<<endl;
   }
    
    
    
    

    t--;
}
return 0;
}