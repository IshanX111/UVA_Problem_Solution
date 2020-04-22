#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,i,c,t1=0,t2=1,nxt;
    while(scanf("%lld",&n)!=EOF){
    t1=1;
    t2=2;
    if(n==0){
            break;
    }
    else if(n==1){
            cout<<"1"<<endl;
    }

    else if(n==2){
            cout<<"2"<<endl;
    }
    else{
    for(i=1;i<n-1;i++){
            nxt=t1+t2;
            t1=t2;
            t2=nxt;
    }
        cout<<nxt<<endl;
    }

    }
}
