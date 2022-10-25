#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll powMod(ll a, ll b)
{
    if(b == 1) return a;
    ll temp = powMod(a , b / 2);
    if(b % 2) return temp * temp * a;
    else return temp * temp;
}

char solve(ll n , ll k)
{
    if(k % 2 == 1) return 'A';
    ll temp = powMod(2 , n - 1);
    if(k == temp) return 'A' + n - 1;
    else if(k < temp) return solve(n - 1 , k);
    else return solve(n - 1 , k - temp);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        cout << solve(n , k) << endl;
    }
}
