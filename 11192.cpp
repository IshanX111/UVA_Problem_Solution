#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,l,n,k,j,x;
    for(;;){
        cin>>n;
        if(n==0){
            break;
        }

        char c[105];
        scanf("%s",c);
        l=strlen(c);
        int m=l/n;
        for(i=0;i<l;i=i+m){


             for (j=i+m-1;j>=i;j--){
                putchar(c[j]);

             }

        }
        printf("\n");



    }



}
