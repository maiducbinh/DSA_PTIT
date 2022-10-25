#include <bits/stdc++.h>

using namespace std;
int n , s , a[31];
int ans , ok;

void Try(int pos , int cnt , int sum)
{
    if(ok) return;
    if(sum == s)
    {
        ans = cnt;
        ok = 1;
        return;
    }
    for(int j = pos ; j <= n ; j++)
        if(sum + a[j] <= s)
        {
            Try(j + 1 , cnt + 1 , sum + a[j]);
        }
}
int main()
{
    cin >> n >> s;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    sort(a + 1 , a + n + 1, greater<int>());
    ans = 1e9;
    ok = 0;
    Try(1 , 0 , 0);
    if(ok) cout << ans;
    else cout << -1;
}
