#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res;
    while(1){
            cin>>n;
            if(n==0)
                break;
            res=(n*(n+1)*((2*n)+1)/6);
            cout<<res<<endl;
    }

}
