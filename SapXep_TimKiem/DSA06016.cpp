#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , m;
        cin >> n >> m;
        int a[n] , b[m];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        sort(a , a + n);
        sort(b , b + m);
        cout << 1ll * a[n - 1] * b[0] << endl;
    }
}
