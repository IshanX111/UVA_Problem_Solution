#include<bits/stdc++.h>
#define Pi acos(-1)
using namespace std;
int main(){

        int t;
        double l,ca,w,area,fa,r;
        cin>>t;
        while(t--){

                cin>>l;
                r=l/5;
                w=(l*6)/10;
                area=l*w;
                ca=Pi*r*r;
                fa=area-ca;

                printf("%.2f %.2f\n",ca,fa);
        }



}
