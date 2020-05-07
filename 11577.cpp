#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    map<char,int>::iterator itr;
    string s;
    int t,i,l,j;
    char temp;
    scanf("%d ",&t);
    for(i=1; i<=t; i++)
    {
        getline(cin,s);
        l=s.size();
        for(j=0;j<l;j++){
           if((s.at(i)>='A' && s.at(i)<='Z') ||(s.at(i)>='a' && s.at(i)<='z')){

                    if(s.at(i)>='A' && s.at(i)<='Z'){
                       s.at(i)=tolower(s.at(i));
                    }
                    temp=s.at(i);
                    mp[temp]++;
           }
        }
        for(itr=mp.begin();itr!=mp.end();itr++){
                cout<<itr->first<<" "<<itr->second<<endl;
        }

    }

}
