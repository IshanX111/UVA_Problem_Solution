#include<bits/stdc++.h>
using namespace std;
int main(){

        float i,a,b,c,d,sum,k,x;
        while(1){

        cin>>a>>b>>c>>d;
        if(a==0.0){
                break;
        }

        sum=0;
        d=b*(d/100);

        for(k=1;;k++){
                if(k==1){
                    sum=b;
                    if(sum>a){
                        cout<<"success on day "<<k<<endl;
                        break;
                    }
                    else{
                        sum=sum-c;
                        if(sum<0){
                            cout<<"failure on day "<<k<<endl;
                            break;
                        }
                    }
                }
                else{

                x=b-(d*(k-1));
                if(x<0){
                    x=0;
                }
                sum=sum+x;
                if(sum>a){
                    cout<<"success on day "<<k<<endl;
                    break;
                }
                else{
                sum=sum-c;
                if(sum<0){
                    cout<<"failure on day "<<k<<endl;
                    break;
                }
                }
                }
        }


        }

}





