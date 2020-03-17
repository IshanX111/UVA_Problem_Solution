#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,j,f,sum,a,b,c,i;
    cin>>n;
    for(j=1;j<=n;j++){
        cin>>f;
        sum=0;
        for(i=0;i<f;i++){

            cin>>a>>b>>c;
            sum=sum+(a*c);
        }


            printf("%d\n",sum);
    }



}
