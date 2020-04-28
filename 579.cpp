#include<bits/stdc++.h>
using namespace std;
int main(){

    float h,m,angle,res1,res2,res3,res4;
    char c;
    while(1){
    cin>>h>>c>>m;
    if(h==0 && m==0){
        break;
    }
    if(h==12){
        h=0;
        res1=h*5*6;
        res2=m*6;
        res3=m*0.5;
        angle=res2-res3;
    }
    else{
            res1=h*5*6;
            res2=m*6;
            res3=m*0.5;
            res4=res1+res3;
            if(res2>res4){
                angle=res2-res4;
            }
            else if(res4>res2){
                    angle=res4-res2;
            }
            else if(res2==res4){
                angle=0;
            }
    }
    if(angle>=180){
        angle=360-angle;
    }
    printf("%.3f\n",angle);
    }

}
