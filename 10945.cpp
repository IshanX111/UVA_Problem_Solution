#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,i;
    string s,s1,s2;
    vector<char>c;
    while(getline(cin,s)){
            if(s.compare("DONE")==0){
                break;
            }
    l=s.size();
    for(i=0;i<l;i++){
        if((s.at(i)>=65 && s.at(i)<=90)|| (s.at(i)>=97 && s.at(i)<=122)){
                if(s.at(i)>=65 && s.at(i)<=90){
                    s.at(i)=s.at(i)+32;
                }
                c.push_back(s.at(i));
        }
    }
    s1="";
    l=c.size();
    for(i=0;i<l;i++){
        s1=s1+c.at(i);
    }
    s2=s1;
    reverse(s1.begin(),s1.end());

    if(s2.compare(s1)==0){
        cout<<"You won't be eaten!"<<endl;
    }
    else{
        cout<<"Uh oh.."<<endl;
    }
    c.clear();
    }

}
