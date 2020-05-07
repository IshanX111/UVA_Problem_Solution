#include<bits/stdc++.h>
using namespace std;
bool check_prime(int  n){

    int c,i,m;
    m=sqrt(n);
    c=0;
    for(i=2;i<=m;i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int sum,x,x1,i,l;
    bool y;
    string s;
    while(getline(cin,s)){
    l=s.size();
    sum=0;
    for(i=0;i<l;i++){

    if(s.at(i)>='A' && s.at(i)<='Z'){
        x=s.at(i)-38;
        sum=sum+x;
    }
    else if(s.at(i)>='a' && s.at(i)<='z'){
            x1=s.at(i)-96;
            sum=sum+x1;
    }
    }

    y=check_prime(sum);
    if(y){
        cout<<"It is a prime word."<<endl;
    }
    else{
        cout<<"It is not a prime word."<<endl;
    }
    }
}
