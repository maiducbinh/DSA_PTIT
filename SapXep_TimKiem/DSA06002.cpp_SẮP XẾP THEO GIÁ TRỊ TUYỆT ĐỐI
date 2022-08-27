#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, x;
        cin >> n >> x;
        pair <ll , ll> a[n];
        for(pair <ll,ll> &i : a)
        {
            cin >> i.first;
            i.second = abs(x - i.first);
        }
        stable_sort(a , a + n , [](pair<ll,ll> x , pair<ll,ll> y)->bool{
             return x.second < y.second;
        });
        for(pair <ll,ll> i : a)
            cout << i.first << " ";
        cout << endl;
    }
}
