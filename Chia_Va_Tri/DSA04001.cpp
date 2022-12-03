#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

ll powMod(ll n , ll k)
{
    if(k == 1) return n;
    ll tmp = powMod(n , k / 2);
    if(k % 2)
        return (tmp % mod) * (tmp % mod) % mod * (n % mod) % mod;
    else return (tmp % mod) * (tmp % mod) % mod;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        cout << powMod(n , k) << endl;
    }
}
