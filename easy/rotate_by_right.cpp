// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n],i,temp,b[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
temp=a[n-1];
for(i=0;i<n-1;i++){
    b[i+1]=a[i];
}
b[0]=temp;
for(i=0;i<n;i++){
    cout<<b[i]<<" ";
}
    return 0;
}
/*
output
5
1 2 3 4 5
5 1 2 3 4 
*/
