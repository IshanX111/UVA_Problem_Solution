#include<bits/stdc++.h>
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
using namespace std;
int main(){

    long long n,res;
    while(1){
    sl(n);
    if(n<0){
        break;
    }
    res=((n*(n+1))/2)+1;
    cout<<res<<endl;
    }
}
