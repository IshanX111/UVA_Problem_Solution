#include<bits/stdc++.h>
#define PI acos(-1.0)
#define rep1(i,n) for(i=1;i<n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,a,n) for(i=a;i<n;i++)
#define repe1(i,n) for(i=1;i<=n;i++)
#define repe0(i,n) for(i=0;i<=n;i++)
#define repe(i,a,n) for(i=a;i<=n;i++)
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
using namespace std;
ll m;
ll f(ll b1,ll p1){
        ll b=b1;
        ll p=p1;
        ll r;

        if(p==0){
            return 1;
        }
        else if(p%2==0){

            r=f(b,p/2);
            return (((r%m)*(r%m))%m);

        }
        else{
            return (((b%m)*(f(b,p-1)%m))%m);
        }
}


int main(){
    FAST;
    ll b,p,r;
    while(cin>>b>>p>>m){
    ll res=f(b,p);
    cout<<res<<endl;
    }
}


