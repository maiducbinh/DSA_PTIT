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
        int a[n + 1] ;
        long long s[n + 1] = {0};
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            s[i] = s[i - 1] + a[i];
        }
        long long sum = 0;
        sort(a + 1, a + n + 1);
        vector <int> v;
        for(int i = 1 ; i <= n - 1 ; i++)
        {
            sum += a[i];
            if(sum == s[i]) v.push_back(i);
        }
        cout << v.size() << endl;
        for(int i : v) cout << i << " ";
        cout << endl;
    }
}
