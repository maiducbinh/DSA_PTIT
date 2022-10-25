#include <bits/stdc++.h>

using namespace std;

int n , a[101] , s , ok;
int ans;

void Try(int pos , int sum , int cnt)
{
    if(sum == s)
    {
        ans = cnt;
        ok = 1;
        return;
    }
    if(ok) return;
    for(int j = pos ; j <= n ; j++)
        if(a[j] + sum <= s)
        {
            Try(j + 1 , sum + a[j] , cnt + 1);
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        sort(a + 1 , a + n + 1 , greater<int>());
        ok = 0;
        Try(1 , 0 , 0);
        if(!ok) cout << -1;
        else cout << ans;
        cout << endl;
    }
}//quen khoi tao ok = 0
