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
        double a[n] , b[n];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i] >> b[i];
        int f[n];
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            f[i] = 1;
            for(int j = 0 ; j < i ; j++)
                if(a[i] > a[j] && b[i] < b[j])
                    f[i] = max(f[i] , f[j] + 1);
            ans = max(ans , f[i]);
        }
        cout << ans << endl;
    }
}
