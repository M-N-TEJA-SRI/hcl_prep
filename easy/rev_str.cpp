// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
string reverse(string &s){
    int i=0,j=s.length()-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
    return s;
}
int main() {
string s;
cin>>s;
cout<<reverse(s);
    return 0;
}
/*
output
teja
ajet
*/
