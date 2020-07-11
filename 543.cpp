/*
    incrementing i as two
    marking the even ones as composite number
*/
#include<bits/stdc++.h>
#define MAX 10000001
using namespace std;
char arr[MAX];

void prime_generator(int n){
    memset(arr,0, sizeof(arr));
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
    int n=1000000;

    prime_generator(n);
    int x;
    while(cin>>x && x!=0){
    int c=0;
    for(int i=3;i<=x/2;i++){
        if(arr[i]==0 && arr[x-i]==0){
            c++;
            cout<<x<<" = "<<i<<" + "<<x-i<<endl;
            break;
        }
    }
    if(c==0){
        cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    }
}

