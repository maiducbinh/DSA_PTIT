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
        int a[n + 1][m + 1] , f[n + 1][m + 1];
        memset(f , 0 , sizeof(f));
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= m ; j++)
            {
                cin >> a[i][j];
                f[i][j] = a[i][j];
            }
        int ans = 0;
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= m ; j++)
            {
                if(a[i][j])
                {
                    f[i][j] = min({f[i - 1][j] , f[i - 1][j - 1] , f[i][j - 1]}) + 1;
                }   ans = max(ans , f[i][j]);
            }
        cout << ans << endl;
    }
}
