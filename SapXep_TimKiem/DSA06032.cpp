#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n , K;
        cin >> n >> K;
        ll a[n];
        for(ll &i : a) cin >> i;
        sort(a , a + n);
        ll cnt = 0;
        for(int i = 0 ; i < n - 2 ; i++)
        {
            if(a[i] >= K) break;
            for(int j = i + 1 ; j < n - 1 ; j++)
            {
                auto chot = lower_bound(a + j + 1 , a + n , K - a[i] - a[j]);
                chot--;
                cnt += (chot - a) - j;
            }
        }
        cout << cnt << endl;
    }
}
