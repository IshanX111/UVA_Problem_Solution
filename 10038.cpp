#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,d,j;
    while(scanf("%d",&n)!=EOF){
    int a[n];
    int b[n-1];
    int c=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        b[i]=abs(a[i]-a[i+1]);
    }


    for(j=1;j<n;j++){
        for(i=0;i<n-1;i++){
            if(b[i]==j){
                c++;
                break;
            }
        }
    }

    if(c==n-1){
        printf("Jolly\n");
    }
    else
        printf("Not jolly\n");

    }

}
