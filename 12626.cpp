#include<bits/stdc++.h>
using namespace std;
int main(){

    char s[600];
    int t,i,c;
    char d;
    scanf("%d",&t);
   while(t--){
        scanf("%s", s);
        int ca=0,cr=0,cm=0,cg=0,ci=0,ct=0;
        int l=strlen(s);
        for(i=0;i<l;i++){
            if(s[i]=='A'){
                ca++;
            }
            if(s[i]=='R'){
                cr++;
            }
            if(s[i]=='M'){
                cm++;
            }
            if(s[i]=='G'){
                cg++;
            }
            if(s[i]=='I'){
                ci++;
            }
            if(s[i]=='T'){
                ct++;
            }
        }
        if(ca<3 || cr<2 || cm<1 || cg<1 || ci<1 || ct<1){
                printf("0\n");
        }
        else if(ca>=3 && cr>=2 && cm>=1 && cg>=1 && ci>=1 && ct>=1){
            c=0;
            while(ca>=3 && cr>=2 && cm>=1 && cg>=1 && ci>=1 && ct>=1){

                c++;
                ca=ca-3;
                cr=cr-2;
                cm=cm-1;
                cg=cg-1;
                ci=ci-1;
                ct=ct-1;

            }
             printf("%d\n",c);
        }

   }


}


