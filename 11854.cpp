#include<bits/stdc++.h>
using namespace std;
int main(){

    int x,y,z;
    for(;;){
            cin>>x>>y>>z;
            if(x==0 && y==0 && z==0){
                break;
            }
            else if(((x*x+y*y)==z*z)||((x*x+z*z)==y*y)||((y*y+z*z)==x*x)){
                printf("right\n");
            }
            else
                printf("wrong\n");

    }

}
