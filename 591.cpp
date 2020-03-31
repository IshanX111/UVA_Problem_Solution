#include<bits/stdc++.h>
using namespace std;
int main(){
    int z,n,i,sum,k,res;
    for(z=1;;z++){
        cin>>n;
        if(n==0){
            break;
        }
        int a[n];
        sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum=sum/n;
        k=0;
        for(i=0;i<n;i++){
            if(a[i]>sum){
                while(a[i]!=sum){
                    a[i]=a[i]-1;
                    k++;
                }
            }
            else if(a[i]<sum){
                while(a[i]!=sum){
                    a[i]=a[i]+1;
                    k++;
                }
            }

        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",z,k/2);
    }



}

