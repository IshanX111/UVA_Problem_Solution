#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s_inp;

    while(getline(cin,s_inp))
    {

        s_inp = s_inp + " ";
        int l = s_inp.size();
        for(int i=0,x=0 ;i<l; i++)
        {
            if(s_inp[i]==' ')
            {
                string s_out=s_inp.substr(x,(i-x));
                reverse(s_out.begin(), s_out.end());
                cout<<s_out;
                x=i+1;
                if(x==l) cout<<"\n";
                else cout<<" ";
            }
        }
    }
}
