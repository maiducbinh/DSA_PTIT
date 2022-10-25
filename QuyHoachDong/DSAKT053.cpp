#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x , y;
        cin >> x >> y;
        int n = x.size() , m = y.size();
        x = ' ' + x;
        y = ' ' + y;
        int f[n + 1][m + 1];
        memset(f , 0 , sizeof(f));
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= m ; j++)
                if(x[i] == y[j]) f[i][j] = f[i - 1][j - 1] + 1;
                else f[i][j] = max(f[i - 1][j] , f[i][j - 1]);
        cout << f[n][m] << endl;
    }
}
