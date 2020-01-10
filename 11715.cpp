#include<bits/stdc++.h>
#define vx pow(v,2)
#define ux pow(u,2)
#define tx pow(t,2)
using namespace std;
int main(){
    double u,v,s,t,a,res,res1;
    int x,c=0;
    for(;;){
            cin>>x;
    if(x==0)
        break;
    switch(x){
    case 1:
    c++;
    cin>>u>>v>>t;
    a=(v-u)/t;
    s=(vx-ux)/(2*a);
    printf("Case %d: %.3lf %.3lf",c,s,a);
    break;
    case 2:
    c++;
    cin>>u>>v>>a;
    t=(v-u)/a;
    s=(vx-ux)/(2*a);
    printf("Case %d: %.3lf %.3lf",c,s,t);
    break;

    case 3:
    c++;
    cin>>u>>a>>s;
    res=(u*u)+(2*a*s);
    v=sqrt(res);
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf",c,v,t);
    break;
    case 4:
    c++;
    cin>>v>>a>>s;
    res1=(v*v)-(2*a*s);
    u=sqrt(res1);
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf",c,u,t);
    break;

    }

    }


}
