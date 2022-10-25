#include <bits/stdc++.h>

using namespace std;
using ll = long long;

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
            int x;
            cin >> x;
            q.push(x);
        }
        ll ans = 0;
        while(q.size() >= 2)
        {
            ll u = q.top();
            q.pop();
            ll v = q.top();
            q.pop();
            ans += u + v;
            q.push(u + v);
        }
        cout << ans << endl;
    }
}
