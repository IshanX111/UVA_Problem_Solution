#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,c,i,j,k;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(k=0;k<n;k++){
            cin>>a[k];
        }
        c=0;
        for(i=0;i<n-1;i++){
                for(j=0;j<n-1-i;j++){
                    if(a[j]>a[j+1]){
                        c++;
                        swap(a[j],a[j+1]);
                    }
                }
        }
        cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
    }


}
