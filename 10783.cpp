#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,a,b,i,sum,j;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        sum=0;
        cin>>a>>b;
        for(i=a; i<=b; i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        printf("Case %d: %d\n",j,sum);

    }


}
