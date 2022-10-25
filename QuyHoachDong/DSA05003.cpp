#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , m , k;
        cin >> n >> m >> k;
        string x , y , z;
        cin >> x >> y >> z;
        int dp[n + 1][m + 1][k + 1];
        memset(dp , 0 , sizeof(dp));
        x = ' ' + x;
        y = ' ' + y;
        z = ' ' + z;
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= m ; j++)
                for(int c = 1 ; c <= k ; c++)
                {
                    if(x[i] == y[j] && y[j] == z[c])
                        dp[i][j][c] = dp[i - 1][j - 1][c - 1] + 1;
                    else dp[i][j][c] = max({dp[i - 1][j][c] , dp[i][j - 1][c] , dp[i][j][c - 1]});
                }
        cout << dp[n][m][k] << endl;
    }
}
