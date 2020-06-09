#include<bits/stdc++.h>
using namespace std;
int main(){

    long long a,b,x;
    while(1){
    cin>>a>>b;
    if(a==0 && b==0){
        break;
    }
    map<int,int>mp;
    map<int,int>::iterator itr;
    for(int i=0;i<a;i++){
        cin>>x;
        mp[x]++;
    }
    for(int i=0;i<b;i++){
        cin>>x;
        mp[x]++;
    }
    int c=0;
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second>1){
            c++;
        }
    }
    cout<<c<<endl;
    mp.clear();
    }
}