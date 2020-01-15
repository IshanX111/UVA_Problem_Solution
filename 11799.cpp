#include<bits/stdc++.h>
using namespace std;
int main(){

    int item,t,i,n,j=0;
    cin>>t;
    while (t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        item=*max_element(a,a+n);
        j++;
        printf("Case %d: %d\n",j,item);


    }




}

