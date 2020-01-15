#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,i,x,y=0;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        x=n/2;
        y++;
        printf("Case %d: %d\n",y,a[x]);

    }

}
