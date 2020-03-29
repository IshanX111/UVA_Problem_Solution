#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,x,c;
    for(;;)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else{
            c=sqrt(n);
            c=c*c;
            if(c==n){
                printf("yes\n");
            }
            else
                printf("no\n");
        }


    }


}
