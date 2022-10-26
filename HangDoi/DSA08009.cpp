#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll thaoTac(ll s , ll t)
{
    set<ll> se;
    queue <pair<ll , ll>> q;
    q.push({s , 0});
    while(1)
    {
        pair<ll , ll> f = q.front(); q.pop();
        if(f.first == t) return f.second;
        ll x = f.first;
        if(x > 1 && !se.count(x - 1))
        {
            q.push({x - 1 , f.second + 1});
            se.insert(x - 1);
        }
        if(!se.count(x * 2) && (x << 2) < (t << 2))
        {
            q.push({x * 2 , f.second + 1});
            se.insert(x * 2);
        }
    }
}
int main()
{
    int k;
    cin >> k;
    while(k--)
    {
        int s , t;
        cin >> s >> t;
        cout << thaoTac(s , t) << endl;
    }
}
