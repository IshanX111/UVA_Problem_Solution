#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
    if(a==0 && a==b && a==c){
        printf("*\n");
    }
    else if(a==1 && a==b && a==c){
        printf("*\n");
    }
    else if(a==1 && b==0 && c==0){
        printf("A\n");
    }

    else if(a==0 && b==1 && c==1){
        printf("A\n");
    }

    else if(b==1 && a==0 && c==0){
        printf("B\n");
    }

    else if(b==0 && a==1 && c==1){
        printf("B\n");
    }

    else if(c==1 && a==0 && b==0){
        printf("C\n");
    }

    else if(c==0 && a==1 && b==1){
        printf("C\n");
    }
    }
}
