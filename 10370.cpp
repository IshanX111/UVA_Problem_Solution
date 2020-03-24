#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum,avg;
    int n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        sum=0;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        avg=(double)sum/n;

        double c=0;
        for(i=0; i<n; i++)
        {
            if(a[i]>avg)
                c++;
        }
        double x=c/n;
        printf("%.3lf%%\n",x*100);

    }
}
