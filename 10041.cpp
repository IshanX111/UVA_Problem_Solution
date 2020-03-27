#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            int a[n];
            for(i=0;i<n;i++){
                cin>>a[i];
            }
            sort(a,a+n);
            int m=a[n/2];
            int res=0;
            for(i=0;i<n;i++){
                res+=abs(m-a[i]);
            }
            printf("%d\n",res);



    }



}
