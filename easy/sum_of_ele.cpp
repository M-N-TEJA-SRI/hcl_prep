// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int sum(int a[],int n){
    int i,s=0;
    for(i=0;i<n;i++){
        s+=a[i];
    }
    return s;
}
int main() {
 int n;
 cin>>n;
 int a[n],i;
 for(i=0;i<n;i++){
     cin>>a[i];
 }
 cout<<sum(a,n);
    return 0;
}
/*
output
6
9 0 4 5 89 90
197
*/
