/*
    incrementing i as two
    marking the even ones as composite number
*/
#include<bits/stdc++.h>
#define MAX 20000001
using namespace std;
char arr[MAX];
int arr1[MAX];


void prime_generator(int n){

    arr[0]=arr[1]=1;
    int x=sqrt(n);
    for(int i=4;i<=n;i+=2){
        arr[i]=1;
    }

    for(int i=3;i<=x;i+=2){

        if(arr[i]==0){
            for(int j=2*i;j<=n;j+=i){
                arr[j]=1;
            }
        }

    }



}

int main(){
    int n,x,k;
    n=20000001;
    prime_generator(n);
    k=1;
    for(int i=2;i<=MAX;i++){

            if(arr[i]==0 && arr[i+2]==0){

                arr1[k]=i;
                k++;

            }

    }


    while(scanf("%d",&x)!=EOF){

            printf("(%d, %d)\n",arr1[x],arr1[x]+2);



    }



}


