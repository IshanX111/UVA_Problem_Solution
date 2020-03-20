#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,sum,x,i;
    char c[6];
    cin>>t;
    sum=0;
    for(i=0;i<t;){

        scanf("%s",c);
        if(c[0]=='d'){
            scanf("%d",&x);
            sum=sum+x;
            i++;
        }
        else if(c[0]=='r'){
            printf("%d\n",sum);
            i++;
        }
    }


}
