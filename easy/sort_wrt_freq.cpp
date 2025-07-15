// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>&r1,pair<int,int>&r2)
{
    if(r1.second>r2.second)
    return true;
    else{
        if(r1.first<r2.first)
        return true;
        else
    return false;
    }
}
int main() {
  int n,i;
  cin>>n;
  int a[n];
  unordered_map<int,int>mp;
  for(i=0;i<n;i++){
      cin>>a[i];
      mp[a[i]]++;
  }
  vector<pair<int,int>>v;
  for(auto it:mp){
      v.push_back({it.first,it.second});
  }
  sort(v.begin(),v.end(),cmp);
  for(auto it:v){
      while(it.second--){
          cout<<it.first<<" ";
      }
  }
    return 0;
}
/*
output
5 
5 5 4 6 4
4 4 5 5 6
*/
