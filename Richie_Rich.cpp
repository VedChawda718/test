/*Chef aims to be the richest person in Chefland by his new restaurant franchise. 
Currently, his assets are worth AA billion dollars and have no liabilities. 
He aims to increase his assets by XX billion dollars per year.

Also, all the richest people in Chefland are not planning to grow and maintain their current worth.

To be the richest person in Chefland, he needs to be worth at least BB billion dollars. 
How many years will it take Chef to reach his goal if his value increases by XX billion dollars each year?*/

#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t>0){
    int a , b , x ;
    cin>>a>>b>>x;

    int no_of_yrs  = (b-a)/x;
    cout<<no_of_yrs<<endl;


    t--;
}
return 0;
}