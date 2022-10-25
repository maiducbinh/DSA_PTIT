#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll f[n + 1];
        memset(f , 0 , sizeof(f));
        f[0] = 1;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= min(i , 3) ; j++)
                f[i] += f[i - j];
        }
        cout << f[n] << endl;
    }
}
