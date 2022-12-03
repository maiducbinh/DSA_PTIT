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
        ll a[n];
        for(ll &i : a) cin >> i;
        sort(a , a + n);
        ll cnt = 0;
        for(int i = 0 ; i < n - 1 ; i++)
        {
            auto j = lower_bound(a + i + 1 , a + n , k + a[i]);
            j--;
            cnt += (j - a) - i;
        }
        cout << cnt << endl;
    }
}//kieu long long
