#include<bits/stdc++.h>
using namespace std;
int main(){

    int  n,k;
    while(scanf("%d%d",&n,&k)!=EOF){

        int m=n;
        int res1=0;
        while(n>=k){
        res1=n/k;
        m=m+res1;
        n=res1+(n%k);
        }
        printf("%d\n",m);



    }


}
