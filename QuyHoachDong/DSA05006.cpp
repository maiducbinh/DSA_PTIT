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
        int a[n];
        for(int &i : a) cin >> i;
        int f[n];
        f[0] = a[0];
        for(int i = 1 ; i < n ; i++)
        {
            f[i] = a[i];
            for(int j = 0 ; j < i ; j++)
                if(a[i] > a[j]) f[i] = max(f[i] , f[j] + a[i]);
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
            ans = max(ans , f[i]);
        cout << ans << endl;
    }
}
