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
        int l = s.size();
        int f[l + 1][l + 1];
        memset(f , 0 , sizeof(f));
        for(int i = 0 ; i < l ; i++) f[i][i] = 1;
        int ans = 1;
        for(int len = 2 ; len <= l ; len++)
        {
            for(int i = 0 ; i <= l - len ; i++)
            {
                int j = i + len - 1;
                if(len == 2)
                {
                    if(s[i] == s[j]) f[i][j] = 1;
                }//quen ngoac la bi de lenh
                else
                {
                    f[i][j] = (s[i] == s[j]) && f[i + 1][j - 1];
                }
                if(f[i][j]) ans = max(ans , len);
            }
        }
        cout << ans << endl;
    }
}
