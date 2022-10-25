#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll p , q;
        cin >> p >> q;
        while(1)
        {
            if(q % p == 0)
            {
                cout << "1/" << q / p;
                break;
            }
            ll res = q / p + 1;
            cout << "1/" << res << " + ";
            p = p * res - q;
            q = q * res;
        }
        cout << endl;
    }
}
