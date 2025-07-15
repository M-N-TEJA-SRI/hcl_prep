// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
string merge(string s,string t){
    int i,j;
    string ans="";
    i=0,j=0;
    while(i<s.length()&&j<t.length()){
        ans+=s[i++];
        ans+=t[j++];
    }
    while(i<s.length()){
        ans+=s[i++];
    }
    while(j<t.length()){
        ans+=t[j++];
    }
    return ans;
}
int main() {
  string s,t;
  cin>>s>>t;
  cout<<merge(s,t);
    return 0;
}
/*
output
teja
sri
tserjia
*/
