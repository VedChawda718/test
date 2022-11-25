#include <bits/stdc++.h>
using namespace std;

    
int main(){
int t;
cin>>t;
while(t>0){
    int n;
    cin>>n;
if(n%2==0){
    string s ,a ,b;
    for(int i = 0 ; i<n ; i++){
    cin>>s[i];
    }
    for(int i = 0 ; i<n/2; i++){
    a[i]= s[i];
    }
    for(int i =0 ; i<n/2 ;i++){
    b[i]=s[i+(n/2)];
    }
     
    for(int i = 0 ; i<n/2; i++){
        if(a[i]!=b[i]){
           cout<<"NO";
           break;
           }
           else{
            cout<<"YES";
            break;
           }
    }
   
    

}
else{
    cout<<"Invalid Size";
}
   t--;
  
}
return 0;
}