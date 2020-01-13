#include<bits/stdc++.h>
using namespace std;
int main()
{
    float c,f,res,d;
    int t,i;

    cin>>t;
    for(i=1;i<=t;i++){

        cin>>c>>d;

        f=(1.8*c)+32;
        res=f+d;
        c=(res-32)/1.8;
        printf("Case %d: %.2f\n",i,c);


    }







}
