#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    while(cin>>s1){
    cin>>s2;
    int l1=s1.size();
    int l2=s2.size();
    int c=0,i,j;
    int x=1;
    for(i=0,j=0;i<l2;i++){
        if(s1.at(j)==s2.at(i)){
            c++;
            j++;
        }
        if(c==l1){
            x=0;
            break;
        }
    }
    if(x==0 || c==l1){
            cout<<"Yes"<<endl;

    }
    else{
        cout<<"No"<<endl;
    }

    }

}
