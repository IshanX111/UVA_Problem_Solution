#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i;
    long long int a,b,c,res,res1,res2;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>c;
        res=b+c;
        res1=a+c;
        res2=a+b;
        if((a<res)&& (b<res1)&&(c<res2)){
            if(a==b && b==c){
                printf("Case %d: Equilateral\n",i);
            }
            else if((a==b && a!=c) || (b==c && c!=a) || (a==c && c!=b)){
                printf("Case %d: Isosceles\n",i);
            }

            else if((a!=b && a!=c) && (b!=c && b!=a) && (c!=a && c!=b)){
                printf("Case %d: Scalene\n",i);
            }
        }
        else
            printf("Case %d: Invalid\n",i);


    }





}
