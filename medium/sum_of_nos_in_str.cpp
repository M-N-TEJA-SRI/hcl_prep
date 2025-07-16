// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
   string s,dig="";
   cin>>s;
   int i=0,sum=0;
   for(i=0;i<s.length();i++){
       if(s[i]>='0'&&s[i]<='9')
       dig+=s[i];
       else{
           if(dig.length()>0){
           sum+=stoi(dig);
           dig="";
           }
       }
   }
   if(dig.length()>0){
           sum+=stoi(dig);
           dig="";
           }
   cout<<sum;
    return 0;
}
/*
output
1abc23
24
*/
