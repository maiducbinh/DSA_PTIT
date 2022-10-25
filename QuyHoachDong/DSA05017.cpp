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
        int left[n] , right[n];
        left[0] = a[0];
        for(int i = 1 ; i < n ; i++)
        {
            left[i] = a[i];
            for(int j = 0 ; j < i ; j++)
                if(a[i] > a[j]) left[i] = max(left[i] , left[j] + a[i]);
        }
        right[n - 1] = a[n - 1];
        for(int i = n - 2 ; i >= 0 ; i--)
        {
            right[i] = a[i];
            for(int j = n - 1 ; j > i ; j--)
                if(a[i] > a[j]) right[i] = max(right[i] , right[j] + a[i]);
        }
        int ans = -1;
        for(int i = 0 ; i < n ; i++)
            ans = max(ans , left[i] + right[i] - a[i]);
        cout << ans << endl;
    }
}
