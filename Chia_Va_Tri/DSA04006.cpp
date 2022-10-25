#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<ll> v;

void init(ll n)
{
    int tmp = log2(n);
    for(int i = 0 ; i <= tmp ; i++)
        v.push_back((ll)pow(2 , i));
}

int Find(ll pos , ll n , int idx)
{
    if(pos & 1) return 1;
    if(pos == v[idx]) return n % 2;
    if(pos < v[idx]) return Find(pos , n / 2 , idx - 1);
    else return Find(2 * v[idx] - pos , n / 2 , idx - 1);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n , l , r;
        cin >> n >> l >> r;
        int m = v.size();
        ll ans = 0;
        for(int i = l ; i <= r ; i++) ans += Find(i , n , m);
        cout << ans << endl;
    }
}
