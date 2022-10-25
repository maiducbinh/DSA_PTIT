#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c , n;
    cin >> c >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    int f[n + 1][c + 1];
    memset(f , 0 , sizeof(f));//gan = 0 thi ra sai ket qua?
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= c ; j++)
        {
            f[i][j] = f[i - 1][j];
            if(a[i] <= j) f[i][j] = max(f[i - 1][j - a[i]] + a[i] , f[i][j]);
        }
    }
    cout << f[n][c];
}
