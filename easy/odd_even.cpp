// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
string evenorodd(int n){
    if(n&1)
    return "odd";
    else
    return "even";
}
int main() {
   int n;
   cin>>n;
   cout<<evenorodd(n);

    return 0;
}
/*
output
even
*/
