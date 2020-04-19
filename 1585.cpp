#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    int n,i,k,l,p,sum,c;
    scanf("%d ",&n);
    for(p=1;p<=n;p++){
        getline(cin,s);
        l=s.size();
        sum=0;
        for(i=0;i<l;i++){
            c=0;
            k=i;
            if(s.at(i)=='O'){
                while(k>=0 && s.at(k)=='O'){
                    c++;
                    k--;
                }
            }
            sum+=c;
        }
        cout<<sum<<endl;
    }



}
