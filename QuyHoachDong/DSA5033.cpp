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
        string r = s;
        reverse(r.begin() , r.end());
        int f[l + 1][l + 1];
        memset(f , 0 , sizeof(f));
        s = ' ' + s;
        r = ' ' + r;
        for(int i = 1 ; i <= l ; i++)
            for(int j = 1 ; j <= l ; j++)
                if(s[i] == r[j])
                    f[i][j] = f[i - 1][j - 1] + 1;
                else f[i][j] = max(f[i][j - 1] , f[i - 1][j]);
        cout << l - f[l][l] << endl;
    }
}
