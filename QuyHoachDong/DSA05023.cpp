#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        s = ' ' + s;
        long long f[n + 1];
        f[1] = s[1] - '0';
        long long sum = f[1];
        for(int i = 2 ; i <= n ; i++)
        {
            f[i] = f[i - 1] * 10 + (s[i] - '0') * i;
            sum += f[i];
        }
        cout << sum << endl;
    }
}
