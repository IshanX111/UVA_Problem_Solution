#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    for(;;)
    {
        cin>>n;
        if(n==0)
        {
            return 0;
        }
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            printf("%d",a[i]);
            if(i<n-1){
                printf(" ");
            }
        }

        printf("\n");
    }

}
