#include<bits/stdc++.h>
using  namespace std;

int digit_count(int n)
{
    int d=0;
    while(n>0)
    {
        d++;
        n=n/10;
    }
    return d;

}
int sum1(int n)
{
    int d=0;
    while(n>0)
    {
        d=d+(n%10);
        n=n/10;
    }
    return d;


}



int main()
{

    int t,i,sum,l,x;
    char c[100];
    while(gets(c))
    {
        if(strcmp(c,"0")==0)
        {
            break;
        }
        l=strlen(c);
        sum=0;
        for(i=0; i<l; i++)
        {


            sum+=c[i]-48;


        }

        int y=digit_count(sum);
        for(;;)
        {
            if(y==1)
            {
                printf("%d\n",sum);
                break;
            }
            int x=sum1(sum);


            y=digit_count(x);
            sum=x;


        }


    }



}
