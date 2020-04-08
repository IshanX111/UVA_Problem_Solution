#include<bits/stdc++.h>
using namespace std;
vector<int>a[1000001];
int main()
{
    int n,q,i,t,j,d,b;
    while(scanf("%d%d",&n,&q)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            cin>>t;
            a[t].push_back(i+1);
        }
        for(j=1; j<=q; j++)
        {
            cin>>d>>b;
            if(d>a[b].size())
            {
                cout<<"0"<<endl;
            }
            else
            {
                printf("%d\n",a[b][d-1]);
            }
        }
    }

}
