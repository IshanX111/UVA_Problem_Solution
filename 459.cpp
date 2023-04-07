#include<bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
vector<ll>adj[50];
ll vis[50];
void add_edge(ll x,ll y){

    adj[x].pb(y);
    adj[y].pb(x);

}
void dfs(ll src){

    vis[src]=1;

    for(auto itr:adj[src]){
        if(!vis[itr]){
            dfs(itr);
        }
    }

}
int main(){

    ll t;
    cin>>t;
    while(t--){

        memset(vis,0,sizeof(vis));
        memset(adj,0,sizeof(adj));
        char ch;
        cin>>ch;
        ll n=ch-65+1;
        getchar();
        string s;
        while(getline(cin, s) && s != ""){
            ll x=s[0]-64;
            ll y=s[1]-64;
            add_edge(x,y);
        }
        ll c=0;
        for(ll i=1;i<=n;i++){
            if(!vis[i]){
                c++;
                dfs(i);
            }
        }
        if(t==0){
            cout<<c<<endl;
        }
        else{
            cout<<c<<endl<<endl;
        }
    }

}

