#include<bits/stdc++.h>
using namespace std;
int main(){

        long long n,x,l,y,res;
        vector<long long>v;
        while(cin>>n){

            v.push_back(n);
            int l=v.size();

            sort(v.begin(),v.end());
            if(l%2!=0){
                x=(l/2)+1;
                cout<<v.at(x-1)<<endl;
            }
            else if(l%2==0){
                x=l/2;
                y=x+1;
                res=(v.at(x-1)+v.at(y-1))/2;
                cout<<res<<endl;
            }


        }

}
