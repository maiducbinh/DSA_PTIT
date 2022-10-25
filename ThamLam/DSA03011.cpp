#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue<ll , vector<ll> , greater<ll>> q;
        while(n--)
        {
            ll x;
            cin >> x;
            q.push(x);
        }
        ll ans = 0;
        while(q.size() > 1)
        {
            ll u = q.top();
            q.pop();
            ll v = q.top();
            q.pop();
            ll tmp = (u + v) % mod;
            ans += (u + v);
            ans %= mod;
            q.push(tmp);
        }
        cout << ans << endl;
    }
}
