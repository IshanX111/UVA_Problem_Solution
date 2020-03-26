#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,m,n,i,x,j,d;
    while(scanf("%d",&n)!=EOF){
        int a[n];
        int b;
        int c;
        for(i=0;i<n;i++){
            cin>>a[i];

        }
        sort(a,a+n);
        cin>>x;
        d=INT_MAX;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                int res=a[i]+a[j];
                int res1=abs(a[i]-a[j]);
                if(res==x && res1<d){
                    b=a[i];

                    c=a[j];

                    d=abs(a[i]-a[j]);
                }
            }

        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",b,c);


    }

}
