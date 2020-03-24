#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,c1,c2,i,j;
    cin>>t;
    for(j=1;j<=t;j++){
        int n;
        c1=0,c2=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                c1++;
            }
            else if(a[i]>a[i+1]){
                c2++;
            }
        }
        printf("Case %d: %d %d\n",j,c1,c2);
    }


}
