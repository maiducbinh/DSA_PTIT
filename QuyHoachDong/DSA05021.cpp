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
        pair<int, int> a[n];
        for(pair<int, int> &i : a)
            cin >> i.first >> i.second;
        sort(a, a + n);
        int dp[n], res = 1;
        for(int i = 0; i < n; ++i)
        {
            dp[i] = 1;
            for(int j = 0; j < i; ++j)
                if(a[i].first > a[j].second)
                    dp[i] = max(dp[i], dp[j] + 1);
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
    return 0;
}
