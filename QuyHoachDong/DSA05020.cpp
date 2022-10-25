#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= m ; j++)
                cin >> a[i][j];
        long long f[n + 1][m + 1];
        //memset(f , 0 , sizeof(f));
        f[1][1] = a[1][1];
        for(int i = 2 ; i <= n ; i++) f[i][1] = f[i - 1][1] + a[i][1];//*
        for(int j = 2 ; j <= m ; j++) f[1][j] = f[1][j - 1] + a[1][j];//*
        for(int i = 2 ; i <= n ; i++)
            for(int j = 2 ; j <= m ; j++)
            {
                f[i][j] = min({f[i - 1][j - 1] , f[i - 1][j] , f[i][j - 1]}) + a[i][j];
            }
        cout << f[n][m] << endl;
    }
}
