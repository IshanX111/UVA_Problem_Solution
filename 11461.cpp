#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,res,res1,c,i;
    for(;;)
    {

        cin>>a>>b;
        if(a==0 && b==0)
        {
            break;
        }
        c=0;
        int j;
        for(i=a; i<=b; i++)
        {
            res=sqrt(i);
            res1=pow(res,2);
            if(res1==i)
            {
                c++;
            }

        }
        printf("%d\n",c);


    }


}
