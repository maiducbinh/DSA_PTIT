#include <bits/stdc++.h>

using namespace std;
int s , t , e , n;
int dx[] = {-2 , -2 , -1 , -1 , 1 , 1 , 2 , 2};
int dy[] = {-1 , 1 , -2 , 2 , -2 , 2 , -1 , 1};
int a[9][9] , visited[9][9];

int bfs(int x , int y)
{
    a[x][y] = 0;
    queue<pair<int,int>> q;
    q.push({x , y});
    visited[x][y] = 1;

    while(!q.empty())
    {
        pair<int,int> top = q.front(); q.pop();
        int u = top.first , v = top.second;
        if(u == e && v == n) return a[e][n];

        for(int k = 0 ; k < 8 ; k++)
        {
            int i = u + dx[k];
            int j = v + dy[k];
            if(i >= 1 && j <= 8 && i <= 8 && j >= 1 && !visited[i][j])
            {
                q.push({i , j});
                visited[i][j] = 1;
                a[i][j] = a[u][v] + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int T;
    cin >> T;
    cin.ignore(1);
    while(T--)
    {
        memset(visited , 0 , sizeof(visited));
        memset(a , 0 , sizeof(a));
        string x , y;
        cin >> x >> y;
        s = x[0] - 'a' + 1;
        t = x[1] - '0';
        e = y[0] - 'a' + 1;
        n = y[1] - '0';
        //cout << s << t << e << n << endl;
        cout << bfs(s , t) << endl;
    }
}
