#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        int a[n + 1];
        for(int i = 1 ; i <= n ; i++) {
                cin >> a[i];
                a[i] %= k;
        }
        int f[n + 1][k + 1];
        for(int i = 0 ; i <= n ; i++)
            for(int j = 0 ; j < k ; j++)
                f[i][j] = INT_MIN;//nhu nay moi dung
        f[1][a[1]] = 1;
        for(int i = 2 ; i <= n ; i++)
        {
            for(int j = 0 ; j < k ; j++)
                f[i][j] = max(f[i - 1][j] , f[i - 1][(j - a[i] + k) % k] + 1);
        }
        cout << f[n][0] << endl;
    }
}
