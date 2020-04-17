#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,a,b,i,j,m,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d%d",&a,&b);
        for(m=1;m<=b;m++)
        {
            for(i=1; i<=a; i++)
            {
                for(j=i; j>=1; j--)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=a-1; i>=1; i--)
            {
                for(j=i; j>=1; j--)
                {
                    printf("%d",i);
                }
                printf("\n");

            }
            if(m!=b || k!=t)printf("\n");

        }
        }


}



