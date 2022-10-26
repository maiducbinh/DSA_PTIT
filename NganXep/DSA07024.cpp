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
        int a[n];
        for(int &i : a) cin >> i;
        int r[n], l[n];
        stack<int> st1, st2;
        for(int i = 0 ; i < n ; i++)
        {
            while(!st1.empty() && a[i] <= a[st1.top()]) st1.pop();
            if(st1.empty()) l[i] = -1;
            else l[i] = st1.top() + 1;
            st1.push(i);
        }
        st2.push(n - 1);
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            while(!st2.empty() && a[i] <= a[st2.top()]) st2.pop();
            if(st2.empty()) r[i] = -1;
            else r[i] = st2.top() - 1;
            st2.push(i);
        }
        ll ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            ll canh = min(a[i] , r[i] - l[i] + 1);
            ans = max(ans , canh);
        }
        cout << ans << endl;
    }
}
