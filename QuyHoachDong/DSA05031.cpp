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
        long long dp[n + 1];//dp[i] cach phan tich so i it nhat thanh cac so nho hon
        for(int i = 0 ; i <= n ; i++)
            dp[i] = i;//te nhat la i = tong binh phuong cua i so 1
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= sqrt(i) ; j++)
                dp[i] = min(dp[i] , dp[i - j * j] + 1);
        cout << dp[n] << endl;
    }
}
