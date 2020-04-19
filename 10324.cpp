#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,i,b,n,c,j,k,p;
    char x;
    string s;
    k=0;
    while(cin>>s){
        k++;
        cout<<"Case "<<k<<":"<<endl;
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>a>>b;
            p=min(a,b);
            x=s.at(p);
            c=0;
            for(j=p;j<=max(a,b);j++){
                if(s.at(j)!=x){
                    c++;
                    break;
                }
            }
            if(c==0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }

        }


    }



}


