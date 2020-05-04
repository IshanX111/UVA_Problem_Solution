#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,d,res1,res2,res3;
    while(1){
        cin>>a>>b>>c>>d;
        if(a==0 && b==0 && c==0 && d==0){
            break;
        }
        res1=c-a;
        res2=d-b;

        if(res2<0){
            res2=res2+60;
            res1=res1-1;
        }
        if(res1<0){
            res1=res1+24;
        }
        res3=(res1*60)+res2;
        cout<<res3<<endl;
    }
}
