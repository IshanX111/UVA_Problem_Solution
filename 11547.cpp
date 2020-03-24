#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,res1;
    cin>>t;
    while(t--){
        int n,res=0;
        cin>>n;

            res=((((((n*567)/9)+7492)*235)/47)-498);
            res1=abs((res%100)/10);

        printf("%d\n",res1);
    }


}
