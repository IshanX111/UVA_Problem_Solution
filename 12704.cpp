#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,r;
    float k,res,res1;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>r;
        k=sqrt((x*x)+(y*y));
        res=r-k;
        res1=r+k;
        printf("%.2f %.2f\n",res,res1);


    }


}
