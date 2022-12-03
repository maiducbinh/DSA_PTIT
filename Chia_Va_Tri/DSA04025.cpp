#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

struct matran{
    ll a[2][2];
    ll sz;

    matran operator * (matran b)
    {
        matran res;
        res.sz = sz;
        for(int i = 0 ; i < 2 ; i++)
        {
            for(int j = 0 ; j < 2 ; j++)
            {
                res.a[i][j] = 0;
                for(int k = 0 ; k < 2 ; k++)
                {
                    res.a[i][j] += a[i][k] * b.a[k][j];
                    res.a[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

matran powMod(matran a , ll b)
{
    if(b == 1) return a;
    matran tmp = powMod(a , b / 2);
    if(b % 2) return tmp * tmp * a;
    else return tmp * tmp;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        matran m;
        m.a[0][0] = m.a[0][1] = m.a[1][0] = 1;
        m.a[1][1] = 0;
        matran res = powMod(m , n);
        cout << res.a[0][1] << endl;
    }
}
