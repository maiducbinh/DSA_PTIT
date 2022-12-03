#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll Merge(ll a[] , ll l , ll m , ll r)
{
    vector<ll> x(a + l , a + m + 1);
    vector<ll> y(a + m + 1 , a + r + 1);
    ll i = 0 , j = 0;
    ll ans = 0;
    while(i < x.size() && j < y.size())
    {
        if(x[i] <= y[j]) a[l++] = x[i++];
        else
        {
            ans += x.size() - i;
            a[l++] = y[j++];
        }
    }
    while(i < x.size()) a[l++] = x[i++];
    while(j < y.size()) a[l++] = y[j++];
    return ans;
}

ll mergeSort(ll a[] , ll l , ll r)
{
    if(l >= r) return 0;
    ll m = (l + r) / 2;
    ll ans = 0;
    ans += mergeSort(a , l , m) + mergeSort(a , m + 1 , r);
    ans += Merge(a , l , m , r);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(ll &i : a) cin >> i;
        cout << mergeSort(a , 0 , n - 1) << endl;
    }
}
