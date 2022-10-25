#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        ll f[n + 1];
        memset(f , 0 , sizeof(f));
        f[0] = 1;
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= k ; j++)
                if(i >= j)
                {
                    f[i] += f[i - j];
                    f[i] %= MOD;
                }
        cout << f[n] << endl;
    }
}
