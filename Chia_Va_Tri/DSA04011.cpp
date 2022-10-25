#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll num(string x)
{
    ll so = 0 , p = 1;
    for(int i = x.size() - 1 ; i >= 0 ; i--)
    {
        so += int(x[i] - '0') * p;
        p *= 2;
    }
    return so;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x , y;
        cin >> x >> y;
        cout << num(x) * num(y) << endl;
    }
}
