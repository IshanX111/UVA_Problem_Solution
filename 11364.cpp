#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,m,n,x,res;
    cin>>t;

    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         m=*max_element(a,a+n);
         x=*min_element(a,a+n);
         res=(m-x)*2;
        printf("%d\n",res);

    }


}
