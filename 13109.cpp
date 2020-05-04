#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,m,x,c,l,sum,t,i;
    cin>>t;
    while(t--){
    cin>>n>>m;
    vector<long long>v;
    for(i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    c=0;
    l=v.size();
    sum=0;
    for(i=0;i<l;i++){
        sum=sum+v.at(i);
        if(sum<=m){
            c++;
        }
    }
    cout<<c<<endl;
    v.clear();
    }
}
