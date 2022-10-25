#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;
long long dp[101][50001];

void init()
{
    //dp[i][j]: so co i chu so va co tong chu so = k
    memset(dp , 0 , sizeof(dp));
    for(int i = 1 ; i <= 9 ; i++)
        dp[1][i] = 1;
    for(int i = 1 ; i <= 100 ; i++)
        for(int num = 0 ; num <= 9 ; num++)
            for(int j = num ; j <= 50000 ; j++)
            {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - num])%mod;//chen them 1 chu so vao so i - 1
                                                               //tong cac chu so tang them = so duoc chen vao
            }
}
int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
}
