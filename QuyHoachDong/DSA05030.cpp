#include <bits/stdc++.h>

using namespace std;
long long f[26][26];//sai kieu du lieu
void init()
{
    for(int i = 0 ; i <= 25 ; i++)
    {
        f[i][0] = 1;
        f[0][i] = 1;
    }
    f[0][0] = 0;
    for(int i = 1 ; i <= 25 ; i++)
        for(int j = 1 ; j <= 25 ; j++)
            f[i][j] = f[i][j - 1] + f[i - 1][j];
}

int main()
{
    int t;
    cin >> t;
    init();
    while(t--)
    {
        int n , m;
        cin >> n >> m;
        cout << f[n][m] << endl;
    }
}
