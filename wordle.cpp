#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
    string s , t1 , m ;

    for(int i =0; i<5 ; i++){
        cin>>s[i];
        
    }
    for(int i =0; i<5 ; i++){
        cin>>t1[i];
       
        if(t1[i]==s[i]){
            m[i]= 'G';
        }
        else{
            m[i] = 'B';
        }
      
    }
    cout<<endl; 

    for(int i = 0; i<5; i++){
        cout<<m[i];
    }
    s.clear();
    t1.clear();
    t--;
   

}
return 0;
}
