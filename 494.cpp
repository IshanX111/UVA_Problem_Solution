#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,c;
    char a[1000];
    while(gets(a)){
            c=0;
        for(i=0;a[i]!='\0';i++){
            if(
               (((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')))&&(((a[i+1]<'a' || a[i+1]>'z')&&(a[i+1]<'A' || a[i+1]>'Z')))
               )
               c++;
        }
        printf("%d\n",c);


    }


}
