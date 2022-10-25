#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    sort(a , a + n);
    ll m1 = a[0] * a[1] * a[n - 1];
    ll m2 = a[n - 1] * a[n - 2] * a[n - 3];
    cout << max(m1 , m2);
}
