#include<bits/stdc++.h>
using namespace std;
long long digit_sum(long long n){

    long long x=n;
    long long d=0;
    while(x>0){
        d=d+x%10;
        x=x/10;
    }

    return d;
}

int main(){
    long long i,l,sum,x,c;
    for(;;){
        string s;
        cin>>s;
        if(s.compare("0")==0){
            break;
        }
        l=s.size();
        sum=0;
        for(i=0;i<l;i++){
                sum+=s.at(i)-48;
        }
        c=0;
        if(sum%9==0){
            c++;
            while(sum!=9){
                x=digit_sum(sum);
                sum=x;
                c++;
            }
             cout<<s<<" is a multiple of 9 and has 9-degree "<<c<<".\n";
        }
        else
        {
            cout<<s<<" is not a multiple of 9."<<endl;
        }
    }

}

