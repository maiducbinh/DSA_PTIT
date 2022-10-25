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
        int left[n] = {0} , right[n] = {0};
        left[0] = right[n - 1] = 1;
        for(int i = 1 ; i < n ; i++)
        {
            if(a[i] > a[i - 1]) left[i] = left[i - 1] + 1;
            else left[i] = 1;
        }
        for(int i = n - 2 ; i >= 0 ; i--)
            if(a[i] > a[i + 1]) right[i] = right[i + 1] + 1;
            else right[i] = 1;
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
            ans = max(ans , right[i] + left[i] - 1);
        cout << ans << endl;
    }
}
