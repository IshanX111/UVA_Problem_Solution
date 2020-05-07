#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,t,x,d;
    char temp;
    map<string,int>mp;
    vector<int>v;
    map<string,int>::iterator itr;
    string s,s1;
    scanf("%d ",&t);
    for(x=1; x<=t; x++)
    {
        cin>>s;
        getchar();
        getline(cin,s1);

        mp[s]++;


    }
    for(itr=mp.begin(); itr!=mp.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;

    }


}
