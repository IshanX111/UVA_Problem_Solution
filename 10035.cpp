#include<bits/stdc++.h>
using namespace std;
int main(){

    for(;;){
        unsigned long long a,b,d,f,r,c,ca;
        cin>>a>>b;
        if(a==0 && b==0){
            break;
        }
        c=0;
        ca=0;
        for(;;){
                if(a==0 && b==0){
                    break;
                }
            d=a%10;
            f=b%10;
            r=f+d+ca;
            a=a/10;
            b=b/10;
            if(r>9){
                    c++;
                    ca=1;
            }
            else{
                    ca=0;

            }
        }
        if(c==1){
        cout<<"1 carry operation."<<endl;
        }
        else if(c==0){
            cout<<"No carry operation."<<endl;
        }
        else{
            cout<<c<<" carry operations."<<endl;
        }


    }


}
