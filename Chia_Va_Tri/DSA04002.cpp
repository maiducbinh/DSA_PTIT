#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

ll powMod(ll a , ll b)
{
    if(b == 1) return a % mod;
    ll tmp = powMod(a , b / 2);
    if(b % 2)
        return (tmp * tmp % mod) * a % mod;
    else return (tmp * tmp % mod);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s = to_string(n);
        reverse(s.begin() , s.end());
        ll m = stoll(s);
        cout << powMod(n , m) << endl;
    }
}
