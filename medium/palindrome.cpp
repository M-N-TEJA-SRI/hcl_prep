// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
bool palindrome(string s){
   
        int i,n=s.length();
        for(i=0;i<s.length()/2;i++){
            if(s[i]!=s[n-i-1])
            return false;
        }
        return true;
    
}
int main() {
    string s;
    cin>>s;
    cout<<palindrome(s);

    return 0;
}
/*
output
coolie
0
*/
