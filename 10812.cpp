#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,a,b,sum,sum1,sum2,sum3;
    cin>>t;
    while(t--){

        cin>>a>>b;
        sum1=(a+b)/2;
        sum2=abs(a-b);
        sum3=sum2/2;
        if(a>=b && (a+b)%2==0){
            printf("%d %d\n",sum1,sum3);

        }
        else{
            printf("impossible\n");


    }

}
}
