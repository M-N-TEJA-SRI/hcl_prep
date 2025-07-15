// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swaping(int &n,int &x){
    n=n^x;
    x=n^x;
    n=n^x;
}
int main() {
   int n,x;
   cin>>n>>x;
  swaping(n,x);
cout<<n<<" "<<x;
    return 0;
}
/*
output
7 4
4 7
*/
