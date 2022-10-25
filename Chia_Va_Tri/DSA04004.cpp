#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int solve(ll n , ll k)
{
    if(k % 2) return 1;
    ll tmp = pow(2 , n - 1);
    if(k == tmp) return n;
    else
        if(k > tmp) return solve(n - 1 , k - tmp);
        else return solve(n - 1 , k);
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
