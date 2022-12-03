#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;
using ll = long long;

ll powMod(ll a, ll b)
{
    if(b == 0) return 1;//quen return khi b = 0
    if(b == 1) return a;
    ll tmp = powMod(a , b / 2);
    if(b % 2)
        return (tmp % mod) * (tmp % mod) % mod * (a % mod) % mod;
    else return (tmp % mod) * (tmp % mod) % mod;
}
int main()
{
    ll a , b;//sai kieu du lieu cua b
    while(1)
    {
        cin >> a >> b;
        if(a == 0 && b == 0)
        {
            return 0;
        }
        cout << powMod(a , b) << endl;
    }

}
