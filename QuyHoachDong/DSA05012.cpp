#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll c[1001][1001];

void init()
{
    for(int i = 0 ; i <= 1000 ; i++)
        for(int j = 0 ; j <= i ; j++)
        {
            if(i == 0 || i == j) c[i][j] = 1;
            else c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
            c[i][j] %= MOD;
        }
}
int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        cout << c[n][k] << endl;
    }
}
