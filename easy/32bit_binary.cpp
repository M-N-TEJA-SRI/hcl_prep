// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
string binary(int n){
    string s="",ans="";
    while(n){
        s+=to_string(n%2);
        n/=2;
    }
    int nx=32-s.length();
    for(int i=0;i<nx;i++){
        ans+='0';
    }
    ans+=s;

    return ans;
}
int main() {
int n;
cin>>n;
cout<<binary(n);
    return 0;
}
/*
output
3
00000000000000000000000000000011
*/
