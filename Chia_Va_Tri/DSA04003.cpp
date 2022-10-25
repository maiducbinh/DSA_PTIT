#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 123456789;

ll powMod(ll a , ll k)
{
    if(k == 1) return a;
    ll temp = powMod(a , k / 2);
    if(k % 2)
        return (temp % mod) * (temp % mod) % mod * (a % mod) % mod;
    else return (temp % mod) * (temp % mod) % mod;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << powMod(2 , n - 1) << endl;
    }
}
