#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,t,x,d;
    char temp;
    map<char,int>mp;
    vector<int>v;
    map<char,int>::iterator itr;
    string s;
    scanf("%d ",&t);
    for(x=1;x<=t;x++){
    getline(cin,s);
    for(i=0;i<s.size();i++){
        if((s.at(i)>='A' && s.at(i)<='Z') ||(s.at(i)>='a' && s.at(i)<='z')){

                    if(s.at(i)>='a' && s.at(i)<='z'){
                       s.at(i)=toupper(s.at(i));
                    }
        temp=s.at(i);
        mp[temp]++;
        }

    }

    }
    for(itr=mp.begin();itr!=mp.end();itr++){
        d=itr->second;
        v.push_back(d);
    }
    sort(v.begin(),v.end(),greater<int>());
    v.erase(unique(v.begin(),v.end()),v.end());

    for(i=0;i<v.size();i++){
        for(itr=mp.begin();itr!=mp.end();itr++){
            if(v.at(i)==itr->second){
                cout<<itr->first<<" "<<itr->second<<endl;
            }
        }
    }

}
