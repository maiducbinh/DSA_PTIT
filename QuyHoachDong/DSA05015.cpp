#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        if(!k) cout << 1;
        else
        {
            long long ans = 1;
            for(int i = n - k + 1 ; i <= n ; i++)
            {
                ans *= i;
                ans %= mod;
            }
            cout << ans;
        }
        cout << endl;
    }
}
