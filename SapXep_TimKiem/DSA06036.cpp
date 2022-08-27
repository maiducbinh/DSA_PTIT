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
        int ok = 0;
        for(int i = n - 1 ; i > 1 ; i--)
        {
            int l = 0 , r = i - 1;
            while(l < r)
            {
                if(a[l] + a[r] == a[i])
                {
                    cout << "YES\n";
                    ok = 1;
                    break;
                }
                else if(a[l] + a[r] < a[i]) l++;
                else r--;
            }
        }
        if(!ok) cout << "NO\n";
    }
}
