#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res,i;
    printf("PERFECTION OUTPUT\n");
    for(;;){
        cin>>n;
        if(n==0)
            break;
        res=0;
        for(i=1;i<n;i++){
            if(n%i==0){
                res=res+i;
            }
        }
        if(res==n){
            printf("%5d  PERFECT\n",n);
        }
        else if(res>n){
            printf("%5d  DEFICIENT\n",n);
        }
        else
            printf("%5d  DEFICIENT\n",n);
    }

printf("END OF OUTPUT\n");
}
