#include<bits/stdc++.h>
using namespace std;
long long rev(long long n)
{
    long long rem;
    long long r=0;
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    return r;
}
bool check_palindrome(long long n)
{

    long long x=n;
    long long y=rev(x);
    if(x==y)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{

    long long t,x,n,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c=1;
        x=rev(n);
        y=x+n;
        while(!check_palindrome(y))
        {
            c++;
            x=rev(y);
            y=x+y;
        }
        printf("%lld %lld\n",c,y);

    }




}
