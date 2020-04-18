#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>c;
    int y,n1,x,l1,b1,i;
    while(1){
    cin>>y;
    if(y==0){
        break;
    }
    n1=y;
    while(n1!=0)
    {
        x=(n1%2);
        c.push_back(x);
        n1=n1/2;
    }
    l1=c.size();
    b1=0;
    string s="";
    for(i=0; i<l1; i++)
    {
        if(c.at(i)==1)
        {
            b1++;
        }
    }
    char p;
    for(i=0; i<l1; i++)
    {
       p=c.at(i)+'0';
       s=s+p;
    }
    reverse(s.begin(),s.end());

    cout<<"The parity of "<<s<<" is "<<b1<<" (mod 2)."<<endl;
    c.clear();

    }
}

