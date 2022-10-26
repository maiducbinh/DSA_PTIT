#include <bits/stdc++.h>
#define fi first
#define se second

using namespace std;
int n , m , a[1001][1001];
int visited[1001][1001] , d[1001][1001];

void nhap()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++) cin >> a[i][j];
    memset(visited , 0 , sizeof(visited));
    memset(d , 0 , sizeof(d));
}

int bfs()
{
    queue<pair<int,int>> q;
    q.push({1 , 1});
    d[1][1] = 0;
    visited[1][1] = 1;

    while(!q.empty())
    {
        pair<int,int> top = q.front(); q.pop();
        if(top.fi == n && top.se == m) return d[n][m];
        int i = top.fi , j = top.se;
        if(i >= 1 && i <= n && j + a[i][j] >= 1 && j + a[i][j] <= m && !visited[i][j + a[i][j]])
        {
            q.push({i , j + a[i][j]});
            visited[i][j + a[i][j]] = 1;
            d[i][j + a[i][j]] = d[i][j] + 1;
        }
        if(i + a[i][j] <= n && i + a[i][j] >= 1 && j >= 1 && j <= m && !visited[i + a[i][j]][j])
        {
            q.push({i + a[i][j], j});
            visited[i + a[i][j]][j] = 1;
            d[i + a[i][j]][j] = d[i][j] + 1;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        nhap();
        cout << bfs() << endl;
    }
}//nham chut cho i , j
