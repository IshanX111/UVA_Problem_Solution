#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ll t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream s1(s);
        vector<ll> v;
        string word;
        while (s1 >> word)
        {
            v.push_back(stoll(word));
        }
        ll mi = -9999999999;
        ll si = v.size();
        for (ll i = 0; i < si - 1; i++)
        {

            for (ll j = i + 1; j < si; j++)
            {

                if (__gcd(v[j], v[i] % v[j]) > mi)
                { ///gcd(a,b)=gcd(b,(a%b))
                    mi = __gcd(v[j], v[i] % v[j]);
                }
            }
        }
        cout << mi << endl;
    }
}