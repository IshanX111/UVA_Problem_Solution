#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t,a,b,c,x,m,res,res1;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        x=a+b;
        res=x;
        m=0;
        res1=0;
        while(res>=c){
        res1=res/c;
        m=m+res1;
        res=res1+(res%c);
        }
        printf("%d\n",m);

    }

}
