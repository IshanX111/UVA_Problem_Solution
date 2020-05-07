#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,t,x;
    char temp;
    map<char,int>mp;
    map<char,int>::iterator itr;
    string s;
    scanf("%d ",&t);
    for(x=1;x<=t;x++){
    getline(cin,s);
    for(i=0;i<s.size();i++){
        if((s.at(i)>='A' && s.at(i)<='Z') ||(s.at(i)>='a' && s.at(i)<='z')){

                    if(s.at(i)>='A' && s.at(i)<='Z'){
                       s.at(i)=tolower(s.at(i));
                    }
        temp=s.at(i);
        mp[temp]++;
        }

    }
    int d=-9999999;
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(d<itr->second){
            d=itr->second;
        }
    }
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(d==itr->second){
            cout<<itr->first;
        }
    }
    cout<<endl;
    mp.clear();
    }

}
