#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[14];
    int i;
    for(i=1;;i++){
            gets(s);

            char s1[]="HELLO";

            char s2[]="HOLA";

            char s3[]="HALLO";

            char s4[]="BONJOUR";

            char s5[]="CIAO";

            char s6[]="ZDRAVSTVUJTE";
            char s7[]="#";
            if(strcmp(s7,s)==0){
                break;
            }
            else if(strcmp(s1,s)==0){
                printf("Case %d: ENGLISH\n",i);
            }
            else if(strcmp(s2,s)==0){
                printf("Case %d: SPANISH\n",i);
            }
            else if(strcmp(s3,s)==0){
                printf("Case %d: GERMAN\n",i);
            }
            else if(strcmp(s4,s)==0){
                printf("Case %d: FRENCH\n",i);
            }
            else if(strcmp(s5,s)==0){
                printf("Case %d: ITALIAN\n",i);
            }
            else if(strcmp(s6,s)==0){
                printf("Case %d: RUSSIAN\n",i);
            }
            else printf("Case %d: UNKNOWN\n",i);


    }


}
