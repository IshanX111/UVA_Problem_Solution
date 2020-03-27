#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p,i;
    int t;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k>>p;
        for(int x=0;x<p;)
        {
            if(k==n && x!=p)
            {

                x++;
                k=1;
            }
            else if(k==n && x==p)
            {
                break;
            }
            else if(k<n)
            {
                k++;
                x++;
            }
        }
        printf("Case %d: %d\n",i,k);
    }
}
