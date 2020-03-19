#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    int c=0;


    for(;;)
    {

        c++;
        if(n==1)
        {
            break;
        }
        else if(n%2!=0)
        {
            n=(3*n)+1;
        }
        else
            n=n/2;

    }


    return c;
}


int main()
{
    int i,x,y,a,b;

    while(scanf("%d%d",&a,&b)!=EOF){
           if(a<=b){
           x=a;
           y=b;}
           else
           {
               y=a;
               x=b;
           }
    int m=0;
    for(i=x; i<=y; i++)
    {

        if(check(i)>=m){
        m=check(i);
        }
    }
    printf("%d %d %d\n",a,b,m);
    }
}

