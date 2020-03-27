#include<bits/stdc++.h>
using namespace std;
int gcdf(int i,int j)
{

    int k,gcd;
    for(k=1; k<=i&&k<=j; k++)
    {
        if(i%k==0 && j%k==0)
            gcd = k;
    }
    return gcd;

}

int main()
{

    int n,i,j;
    for(;;)
    {   cin>>n;
        if(n==0){
            break;
        }
        int g=0;
        for(i=1; i<n; i++){
            for(j=i+1; j<=n; j++){
                g+=gcdf(i,j);
            }
        }
        printf("%d\n",g);
    }


}
