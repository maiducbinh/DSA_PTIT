#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        int n = x.size();
        int mlen = 1;
        int f[n + 1][n + 1];
        memset(f , 0 , sizeof(f));
        for(int i = 0 ; i < n ; i++)
            f[i][i] = 1;
        for(int len = 2 ; len <= n ; len++)
        {
            for(int i = 0 ; i <= n - len ; i++)
            {
                int j = i + len - 1;
                if(len == 2)
                {
                    if(x[i] == x[j]) f[i][j] = 1;
                }
                else
                {
                    f[i][j] = (x[i] == x[j]) && (f[i + 1][j - 1]);
                }
                if(f[i][j]) mlen = max(mlen , len);
            }
        }
        cout << mlen << endl;
    }
}
