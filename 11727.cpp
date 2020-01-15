#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,j=0;
    int a[3];
    cin>>t;
    while (t--){

        for(i=0;i<3;i++){
            cin>>a[i];
        }
        j++;
        sort(a,a+3);
        printf("Case %d: %d\n",j,a[1]);


    }




}
