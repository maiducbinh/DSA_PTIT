#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll floor(ll x , ll a[] , ll l , ll r , ll ans)
{
    if(l > r) return ans;
    ll m = (l + r) / 2;
    if(a[m] <= x)
    {
        ans = m;
        return floor(x , a , m + 1 , r , ans);
    }
    else return floor(x , a , l , m - 1 , ans);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n , x;
        cin >> n >> x;
        ll a[n + 1];
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        cout << floor(x , a , 1 , n , -1) << endl;
    }
}
