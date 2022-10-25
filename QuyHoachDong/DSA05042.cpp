#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        ll a[n + 1];
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        map<ll , int> mp;
        ll sum = 0;
        int ok = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            sum += a[i];
            if(sum == k || mp[sum - k])
            {
                cout << "YES\n";
                ok = 1;
                break;
            }
            mp[sum]++;
        }
        if(!ok) cout << "NO\n";
    }
}
