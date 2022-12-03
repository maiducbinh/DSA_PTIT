#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll f[100];
void init()
{
    f[1] = f[2] = 1;
    for(int i = 3 ; i < 93 ; i++)
        f[i] = f[i - 2] + f[i - 1];
}

int Find(ll n , ll k)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(k <= f[n - 2])
        return Find(n - 2 , k);
    else return Find(n - 1 , k - f[n - 2]);
}
int main()
{
    int t;
    cin >> t;
    init();
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        cout << Find(n , k) << endl;
    }
}
