#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t,res,i;
    while(scanf("%lld",&t)!=EOF){
        res=0;
        for(i=1;i<=t;i++){
            res+=(i*i*i);
        }
        printf("%lld\n",res);

    }

}
