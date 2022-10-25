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
        int a[n];
        for(int &i : a) cin >> i;
        ll f[k + 1];
        memset(f , 0 , sizeof(f));
        f[0] = 1;
        for(int i = 1 ; i <= k ; i++)
        {
            for(int j = 0 ; j < n ; j++)
                if(i >= a[j]) {
                    f[i] += f[i - a[j]];
                    f[i] %= MOD;//thieu cho nay
                }
        }
        cout << f[k] << endl;
    }
}
