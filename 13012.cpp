#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,i;
    int a[5];
    while(cin>>n)
    {
        c=0;
        for(i=0;i<5;i++){
            cin>>a[i];
        }

        for(i=0;i<5;i++){
            if(n==a[i]){
                c++;
            }
        }
        cout<<c<<endl;
    }

}

