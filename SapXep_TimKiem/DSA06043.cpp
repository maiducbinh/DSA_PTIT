#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        ll s[n + 1] = {0};
        for(int i = 1 ; i <= n ; i++)
            s[i] = s[i - 1] + a[i];
        int pos = -1;
        for(int i = 2 ; i <= n - 1 ; i++)
            if(s[i - 1] == s[n] - s[i])
            {
                pos = i;
                break;
            }
        cout << pos << endl;
    }
}
