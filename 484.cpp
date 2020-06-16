#include <bits/stdc++.h>
using namespace std;

int main()
{   
    map<int, int> mp;
    map<int, int>::iterator itr;
    vector<int> v;
   
    int n,i;
    while (cin >> n)
    {
        if(mp.count(n)==0){
            mp[n]==1;
            mp[n]++;
            v.push_back(n);
        }
        else{
            mp[n]++;
        }
    }
    for(i=0;i<v.size();i++){
        for(itr=mp.begin();itr!=mp.end();itr++){
            if(v.at(i)==itr->first){
                cout<<itr->first<<" "<<itr->second<<endl;
            }
        }
    }
}