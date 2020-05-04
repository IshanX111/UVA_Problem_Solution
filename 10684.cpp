#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,c,i,m,x,sum;
    vector<int>v;

    while(cin>>n,n!=0){

        int a[n];
        sum=0;
        m=-1;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
            if(sum<0){
                sum=0;
            }
            if(sum>m){
                m=sum;
            }

        }
        if(m>0){
            cout<<"The maximum winning streak is "<<m<<"."<<endl;
        }
        else{
            cout<<"Losing streak."<<endl;
        }


    }
}
