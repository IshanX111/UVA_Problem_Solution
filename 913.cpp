#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,x,y,sum;
    while(scanf("%lld",&n)!=EOF){

        x=n/2;
        y=(n*(x+1))+x;
        sum=(3*y)-6;
        cout<<sum<<endl;

    }

}
