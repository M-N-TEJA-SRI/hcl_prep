// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
   int a,b,c;
   cin>>a>>b>>c;
   vector<int>v={a,b,c};
   sort(v.begin(),v.end());
   cout<<v[1];

    return 0;
}
/*
output
3 1 9
3
*/
