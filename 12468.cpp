#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,f,res,d;
    for(;;){
        cin>>i>>f;
        if(i==-1 &&f==-1){
            break;
        }
        if(i<f){
            d=f-i;
            if(d>=50){
                d=100-d;
            }

            printf("%d\n",d);
        }
        if(f<i){
            d=i-f;
            if(d>=50){
            d=100-d;
            }
            printf("%d\n",d);

        }





    }





}
