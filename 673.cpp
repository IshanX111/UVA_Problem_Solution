#include<bits/stdc++.h>
#define rep1(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
using namespace std;
bool check_balance(string s1){

    int i;
    stack<char>c;
    string s=s1;
    if (s==""){
        return true;
    }

    int l=s.size();
        rep0(i,l){
            if(s.at(i)=='(' || s.at(i)=='['){
                c.push(s.at(i));
            }
            else{
                if(c.empty()){
                    return false;

                }
                else if(s.at(i)==')' && c.top()!='('){
                    return false;

                }
                else if(s.at(i)==']' && c.top()!='['){
                    return false;

                }

                c.pop();

            }
        }
        if(c.empty()){
                return true;

        }
        else{
                return false;
        }

}


int main(){
    string s;
    int n,i,t;
    scanf("%d ",&n);
    rep1(i,n){


        getline(cin,s);
        if(check_balance(s)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }


}

