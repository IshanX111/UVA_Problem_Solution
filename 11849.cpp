#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n,m;
    while(cin>>n>>m && n!=0 && m!=0){

        map<ll,ll>mp1;
        while(n--){
            ll x;
            cin>>x;
            mp1[x]++;
        }
        int c=0;
        while(m--){
            ll x;
            cin>>x;
            if(mp1[x]>0){
                c++;
            }
        }
        cout<<c<<endl;
    }

}

