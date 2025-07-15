// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int maxi(int a[],int n){
    int i,maxnum=INT_MIN;
    for(i=0;i<n;i++){
        maxnum=max(maxnum,a[i]);
    }
    return maxnum;
}
int main() {
 int n;
 cin>>n;
 int a[n],i;
 for(i=0;i<n;i++){
     cin>>a[i];
 }
 cout<<maxi(a,n);
    return 0;
}
/*
output
6
9 0 4 5 89 90
90
*/
