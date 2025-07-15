// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int bin_search(int a[],int n,int key){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==key)
        return mid;
        else if(a[mid]>key)
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
}
int main() {
   int n,key;
   cin>>n>>key;
   int a[n],i;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
cout<<bin_search(a,n,key);
    return 0;
}
/*
output
5 7
2 7 8 10 90
1
*/
