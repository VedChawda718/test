
/*PROBLEM STATEMENT: The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9.
 These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0.
 Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. 
 We call such numbers palindrome.

Ash happens to see this game and wants to simulate the same in the computer. 
As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not. */
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
	
	while(t>0){
	    string s;
	    cin>>s;
	    string ans=s; //we have stored the contents of the string s in a new string i.e ans as a backup because we will reverse it in next step
	    reverse(s.begin(),s.end());  // we are reversing the string s 
        
	    if(s==ans){
	        cout<<"wins"<<endl;
	    }
	    else{
	        cout<<"loses"<<endl;
	    }
    t--;
	}


return 0;
}