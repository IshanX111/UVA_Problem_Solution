#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,a,b,c,d,i;
    for(;;){
    cin>>n;
    if(n==0){
        break;
    }
    cin>>a>>b;

    for(i=1;i<=n;i++){
        cin>>c>>d;
        if(c==a || (d>=b && d<b)){
            printf("divisa\n");
        }
        else if(d==b || (c>=a && c<a)){
            printf("divisa\n");
        }
        else if(c>a && d>b){
            printf("NE\n");
        }

        else if(c<a && d>b){
            printf("NO\n");
        }

        else if(c>a && d<b){
            printf("SE\n");
        }

        else if(c<a && d<b){
            printf("SO\n");
        }

    }


    }


}
