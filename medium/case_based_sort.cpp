// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
string characters(string s){
   int i,j;
   string upr="",lwr="",ans="";
   for(i=0;i<s.length();i++){
       if(s[i]>='a'&&s[i]<='z')
       lwr+=s[i];
       else
       upr+=s[i];
   }
   sort(lwr.begin(),lwr.end());
   sort(upr.begin(),upr.end());
   i=0,j=0;
    while(i<lwr.length()&&j<upr.length()){
        ans+=lwr[i++];
        ans+=upr[j++];
    }
    while(i<lwr.length()){
        ans+=lwr[i++];
    }
    while(j<upr.length()){
        ans+=upr[j++];
    }
    return ans;
}
int main() {
    string s;
    cin>>s;
    cout<<characters(s);

    return 0;
}
/*
output
KauSHikI
aHiIkKuS
*/
