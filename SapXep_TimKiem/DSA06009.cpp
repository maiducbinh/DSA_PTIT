#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a , a + n);
        int cnt = 0;
        for(int i = 0 ; i < n - 1 ; i++)
        {
            auto l = lower_bound(a + i + 1 , a + n , k - a[i]);
            auto r = upper_bound(a + i + 1 , a + n , k - a[i]);
            if(*l == k - a[i]) cnt += r - l;
        }
        cout << cnt << endl;
    }
}
