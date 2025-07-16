// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isprime(int n){
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main() {
   int n,i,sum=0;
   cin>>n;
   for(i=2;i<=n;i++){
       if(isprime(i)==true)
       sum+=i;
   }
   cout<<sum;

    return 0;
}
/*
output
15
41
*/
