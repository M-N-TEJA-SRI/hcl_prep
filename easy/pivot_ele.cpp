// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
   int n,i,sum=0,front=0,ele=-1;
   cin>>n;
  int a[n];
  for(i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
  }
  for(i=0;i<n;i++){
      sum-=a[i];
      if(front==sum){
          ele=a[i];
          break;
      }
      front+=a[i];
  }
  cout<<ele;
    return 0;
}
/*
output
5
1 4 2 5 0
2
*/
