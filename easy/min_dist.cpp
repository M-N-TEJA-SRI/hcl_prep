// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
void indices(int x,int a[],int n,vector<int>&v){
    int i;
    
    for(i=0;i<n;i++){
        if(a[i]==x)
        v.push_back(i);
    }

}
int mindist(vector<int>&vx,vector<int>&vy){
    int i,j,mini=INT_MAX;
    for(i=0;i<vx.size();i++){
        for(j=0;j<vy.size();j++){
           mini=min(mini,abs(vx[i]-vy[i])); 
        }
    }
    return mini;
}
int main() {
   int n,x,y;
   cin>>n;
   int a[n],i;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
cin>>x>>y;
vector<int>vx,vy;
indices(x,a,n,vx);
indices(y,a,n,vy);
cout<<mindist(vx,vy);
    return 0;
}
/*
output
10
5 1 2 3 2 5 4 2 3 1
2 3
1
*/
