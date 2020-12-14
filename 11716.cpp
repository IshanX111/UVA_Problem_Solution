#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,i;
    cin>>t;
    string s;
    getchar();
    while(t--)
    {
        getline(cin,s);
        int l=s.size();
        //cout<<l<<endl;
        int x=(int)sqrt(l);
        //cout<<x<<endl;
        if(x*x!=l)
        {
            cout<<"INVALID"<<endl;
            continue;
        }
        else
        {
            char a[x][x];

            i=0;
            for(int j=0; j<x; j++)
            {
                for(int k=0; k<x; k++)
                {
                    a[j][k]=s[i];
                    i++;
                }
            }
            for(int j=0; j<x; j++)
            {
                for(int k=0; k<x; k++)
                {
                    cout<<a[k][j];
                }
            }

            cout<<endl;

        }
    }
}
