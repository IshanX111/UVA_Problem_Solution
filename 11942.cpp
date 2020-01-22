#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,c;
    cin>>t;
    int a[10];
    int b[10];
    printf("Lumberjacks:\n");
    while(t--){
            c=0;
        for(i=0;i<10;i++){
            cin>>a[i];
        }
        for(i=0;i<10;i++){
            b[i]=a[i];
        }
        if(a[0]<=a[9]){
            sort(a,a+10);
            for(i=0;i<10;i++){
            if(b[i]!=a[i]){
                c++;
                break;
            }
        }
        if(c==0){
            printf("Ordered\n");

        }
        else
            printf("Unordered\n");

        }
        else if(a[0]>a[9]){
             sort(a, a+10, greater<int>());
              for(i=0;i<10;i++){
            if(b[i]!=a[i]){
                c++;
                break;
            }
        }
        if(c==0){
            printf("Ordered\n");

        }
        else
            printf("Unordered\n");


        }


    }





}
