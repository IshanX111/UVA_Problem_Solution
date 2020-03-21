#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,n;
    int i;
    for(i=1;;i++){
    cin>>x;
    n=(log(x)/log (2))+1;
    if(x<0)break;
    printf("Case %d: %.0f\n",i,ceil(n-1));
    }
}
