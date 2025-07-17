// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
bool anagrams(string s,string t){
    if(s.length()!=t.length())
    return false;
    else{
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i;
        for(i=0;i<s.length();i++){
            if(s[i]!=t[i])
            return false;
        }
        return true;
    }
}
int main() {
    string s,t;
    cin>>s>>t;
    cout<<anagrams(s,t);

    return 0;
}
/*
output
uelo
oleu
1
*/
