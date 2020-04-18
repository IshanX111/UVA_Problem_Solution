#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>c,c1;
    int n2,n1,l1,i,l2,b1,b2,y,n3,sum,d,q,x,tt,ttt;
    cin>>tt;
    for(ttt=1;ttt<=tt;ttt++){

    cin>>y;
    n1=y;
    while(n1!=0)
    {
        x=(n1%2);
        c.push_back(x);
        n1=n1/2;
    }
    l1=c.size();
    b1=0;
    for(i=0; i<l1; i++)
    {
        if(c.at(i)==1)
        {
            b1++;
        }
    }

    n3=y;
    sum=0;
    q=0;
    while(n3>0)
    {
        d=n3%10;
        sum=sum+(d*pow(16,q));
        n3=n3/10;
        q++;
    }
    n2=sum;
    while(n2!=0)
    {
        x=(n2%2);
        c1.push_back(x);
        n2=n2/2;
    }
    l2=c1.size();
    b2=0;
    for(i=0; i<l2; i++)
    {
        if(c1.at(i)==1)
        {
            b2++;
        }
    }
    cout<<b1<<" "<<b2<<endl;
    c.clear();
    c1.clear();
    }
}


