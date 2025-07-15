// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n],i;
   unordered_map<int,int>mp;
   for(i=0;i<n;i++){
       cin>>a[i];
       mp[a[i]]++;
   }
for(auto it:mp){
    if(it.second>1)
    cout<<it.first<<" ";
}
    return 0;
}
/*
output
5
1 2 3 2 1
2 1 
*/
