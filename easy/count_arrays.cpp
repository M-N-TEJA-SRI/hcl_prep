// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int count(int x,int b[],int n){
    int i,c=0;
    for(i=0;i<n;i++){
        if(b[i]==x)
        c++;
    }
    return c;
}
int main() {
   int n;
   cin>>n;
   int a[n],i,b[n],ans[n],x;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
for(i=0;i<n;i++){
    cin>>b[i];
}
for(i=0;i<n;i++){
    x=count(a[i],b,n);
    ans[i]=x;
}
for(i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
    return 0;
}
/*
output
5
1 2 3 2 1
2 1 2 3 3
1 2 2 2 1
*/
