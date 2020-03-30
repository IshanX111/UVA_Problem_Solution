#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k;
    string s[10];
    int a[10];
    vector<string> ss;
    int t;
    cin>>t;
    for(k=1;k<=t;k++){
    for(int i=0; i<10; i++)
    {
        cin >> s[i];
        ss.push_back(s[i]);
        cin>>a[i];
    }
    int x=*max_element(a,a+10);

    printf("Case #%d:\n",k);
    for(i=0; i<10; i++)
    {
        if(a[i]==x)
        {

            cout<<s[i]<<endl;
        }
    }
    }
}
