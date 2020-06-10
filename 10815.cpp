#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,l;
    string s;
    char ch;
    set<string>ss;
    set<string>::iterator itr;
      
    while(cin>>s){

        l=s.size();
        string s1="";
        for(i=0;i<l;i++){
            if(s.at(i)>='A' && s.at(i)<='Z'){
                ch=tolower(s.at(i));
                s1=s1+ch;
            }
            else if(s.at(i)>='a' && s.at(i)<='z'){
                s1=s1+s.at(i);
            }
            else{
                if(s1!=""){                    
                    ss.insert(s1);
                    s1="";
                }
            }
        }
        if(s1!=""){
            ss.insert(s1);
        }
        
    }
    for(itr=ss.begin();itr!=ss.end();itr++){
            cout<<*itr<<endl;
    }
    ss.clear();
    
}