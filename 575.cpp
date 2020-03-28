#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int sum,i,x,res,m,j;
    char s[1005];
    for(;;){
        gets(s);
        if(strcmp(s,"0")==0){
            return 0;
        }
        x=strlen(s);
        sum=0;
        res=0;
        for(j=x,i=0;j>=1;j--,i++){
            res=(long long int)pow(2,j);
            m=s[i]-48;
            sum+=m*(res-1);
            if(sum>=2147483647){
                sum=2147483647;
            }
        }
        printf("%lld\n",sum);
    }

}
