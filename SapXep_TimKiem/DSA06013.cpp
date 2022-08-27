#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , x;
        cin >> n >> x;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a , a + n);
        auto i = lower_bound(a , a + n , x);
        if(*i != x) cout << -1;
        else
        {
            auto j = upper_bound(a , a + n , x);
            cout << j - i;
        }
        cout << endl;
    }
}
