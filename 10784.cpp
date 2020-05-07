#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    double n,res;
    int x;
    for(i=1;;i++){
            cin>>n;
            if(n==0){
                break;
            }
            x=int(ceil((3+sqrt(9+8*n))/2));
            cout<<"Case "<<i<<": "<<x<<endl;
    }

}
