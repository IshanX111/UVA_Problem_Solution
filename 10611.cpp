#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,t,high,mid,low,key,index;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){

        cin>>a[i];

    }
    cin>>t;
    for(i=1;i<=t;i++){

        low=0;
        high=n-1;
        cin>>key;
        while(low<=high){
            mid=(low+high)>>1;
            if(a[mid]==key){
                index=mid;
                high=mid-1;
            }
            else if(a[mid]>key){
                    high=mid-1;

            }
            else if(a[mid]<key){
                    low=mid+1;
            }
        }
        low=low-1;
        if(low<0){
            cout<<"X"<<" ";
        }
        else{

            cout<<a[low]<<" ";

        }
        ///uppercase
        low=0;
        high=n-1;

        while(low<=high){
            mid=(low+high)>>1;
            if(a[mid]==key){
                index=mid;
                low=mid+1;
            }
            else if(a[mid]>key){
                    high=mid-1;

            }
            else if(a[mid]<key){
                    low=mid+1;
            }
        }
        if(key>=*max_element(a,a+n)){
            cout<<"X"<<endl;
        }
        else{
            cout<<a[low]<<endl;
        }
    }
}

