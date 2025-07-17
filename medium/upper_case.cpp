// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z')
        s[i]-=32;
    }
    cout<<s;

    return 0;
}
/*
output
tEja
TEJA
*/
