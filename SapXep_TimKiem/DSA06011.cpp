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
        ll a[n];
        for(ll &i : a) cin >> i;
        ll ans = INT_MAX;
        for(int i = 0 ; i < n - 1 ; i++)
            for(int j = i + 1 ; j < n ; j++)
                if(abs(ans) > abs(a[i] + a[j]))
                    ans = a[i] + a[j];
        cout << ans << endl;
    }
}
