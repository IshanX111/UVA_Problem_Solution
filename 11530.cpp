#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,k;
    char o;
    scanf("%d%c",&t,&o);
    for(i=1;i<=t;i++){
            char s[105];
            gets(s);
            int c=0,j;
            int l=strlen(s);

            for(j=0;j<l;j++){

                if(s[j]==' '){
                        c=c+1;

                }
                else if(s[j]=='a' || s[j]=='d' ||s[j]=='g'||s[j]=='j'||s[j]=='m'||s[j]=='p'||s[j]=='t'||s[j]=='w'){
                    c=c+1;
                }

                else if(s[j]=='b' || s[j]=='e' ||s[j]=='h'||s[j]=='k'||s[j]=='n'||s[j]=='q'||s[j]=='u'||s[j]=='x'){
                    c=c+2;
                }

                else if(s[j]=='c' || s[j]=='f' ||s[j]=='i'||s[j]=='l'||s[j]=='o'||s[j]=='r'||s[j]=='v'||s[j]=='y'){
                    c=c+3;
                }
                else if(s[j]=='s'||s[j]=='z'){
                    c=c+4;
                }


            }
            printf("Case #%d: %d\n",i,c);






    }



}
