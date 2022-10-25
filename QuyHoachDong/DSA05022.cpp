#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ins , del , cpy;
        cin >> ins >> del >> cpy;
        int dp[n + 1];
        dp[0] = 0;
        dp[1] = ins;//thieu cho nay la wa
        for(int i = 2 ; i <= n ; i++)
        {
            if(i & 1) dp[i] = min(dp[i - 1] + ins , dp[(i + 1) >> 1] + cpy + del);
            else dp[i] = min(dp[i - 1] + ins , dp[i / 2] + cpy);
        }
        cout << dp[n] << endl;
    }
}
