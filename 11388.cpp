#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll lcm ( ll a, ll b ) {
    return ( a / __gcd ( a, b ) ) * b;
}
int main(){
    
    ll t;
    cin>>t;
    while(t--){

        ll a,b;
        cin>>a>>b;
        if(b%a!=0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }

    }








}