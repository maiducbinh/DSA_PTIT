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
        ll a[n] , b[n];
        for(ll &i : a) cin >> i;
        for(ll &i : b) cin >> i;
        sort(a , a + n);
        sort(b , b + n , greater<ll>());
        ll sum = 0;
        for(int i = 0 ; i < n ; i++)
            sum += a[i]*b[i];
        cout << sum << endl;
    }
}
