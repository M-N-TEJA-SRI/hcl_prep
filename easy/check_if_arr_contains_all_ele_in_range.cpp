// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
bool range(int a[],int n,int x,int y){
    if(x>y)
    return false;
    int i,j;
    for(i=x;i<=y;i++){
        bool found=false;
        for(j=0;j<n;j++){
            if(a[j]==i)
            {
                found=true;
                break;
            }
        }
        if(!found)
        return false;
    }
    return true;
}
int main() {
int n;
cin>>n;
int a[n],i,x,y;
for(i=0;i<n;i++){
    cin>>a[i];
}
cin>>x>>y;
cout<<range(a,n,x,y);
    return 0;
}
/*
output
7
1 4 5 2 7 8 3
2 5
1
*/
