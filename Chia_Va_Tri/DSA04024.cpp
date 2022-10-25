#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

struct matran{
    ll a[11][11];
    int s;
    matran operator * (matran b)
    {
        matran res;
        res.s = s;
        for(int i = 0 ; i < s ; i++)
            for(int j = 0 ; j < s ; j++)
            {
                res.a[i][j] = 0;
                for(int k = 0 ; k < s ; k++)
                {
                    res.a[i][j] += a[i][k] * b.a[k][j];
                    res.a[i][j] %= mod;
                }
            }
        return res;
    }
};

matran powMod(matran m , int k)
{
    if(k == 1) return m;
    matran tmp = powMod(m , k / 2);
    if(k % 2)
        return tmp * tmp * m;
    else return tmp * tmp;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        matran m;
        m.s = n;
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < n ; j++)
                cin >> m.a[i][j];
        matran ans = powMod(m , k);
        ll sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            sum += ans.a[i][n - 1];
            sum %= mod;
        }
        cout << sum << endl;
    }
}

