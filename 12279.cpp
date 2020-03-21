#include<bits/stdc++.h>
using namespace std;
int main(){

    int x,i,j;
    for(j=1;;j++){
        cin>>x;
        int c=0;
        if(x==0){
            break;
        }
        int a[x];
        for(i=0;i<x;i++){
            cin>>a[i];
            if(a[i]>0){
                c++;
            }
            else if(a[i]==0){
                c--;
            }
        }
        printf("Case %d: %d\n",j,c);

    }

}
