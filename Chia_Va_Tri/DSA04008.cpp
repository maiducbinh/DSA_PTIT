#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;
using ll = long long;
struct matran{
    ll a[2][2];
    matran operator * (matran khac)
    {
        matran res;
        for(int i = 0 ; i < 2 ; i++)
            for(int j = 0 ; j < 2 ; j++)
            {
                res.a[i][j] = 0;
                for(int k = 0 ; k < 2 ; k++)
                {
                    res.a[i][j] += a[i][k] * khac.a[k][j];
                    res.a[i][j] %= mod;
                }
            }
        return res;
    }
};

matran powMod(matran a , ll n)
{
    if(n == 1) return a;
    matran tmp = powMod(a , n / 2);
    if(n % 2) return tmp * tmp * a;
    else return tmp * tmp;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        matran m;
        m.a[0][0] = m.a[0][1] = m.a[1][0] = 1;
        m.a[1][1] = 0;
        matran res = powMod(m , n);
        cout << res.a[0][1] << endl;
    }
}
