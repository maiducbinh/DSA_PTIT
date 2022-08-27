#include <bits/stdc++.h>

using namespace std;
int a[21][21];
int n , m;
int ans;

void dfs(int u , int len)
{
    ans = max(len , ans);
    for(int v = 0 ; v < n ; v++)
        if(a[u][v])
        {
            a[u][v] = a[v][u] = 0;
            dfs(v , len + 1);
            a[u][v] = a[v][u] = 1;
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(a , 0 , sizeof(a));
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            a[x][y] = a[y][x] = 1;
        }
        ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            dfs(i , 0);
        }
        cout << ans << endl;
    }
}
