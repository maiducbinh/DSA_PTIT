#include <bits/stdc++.h>

using namespace std;
int n , a , b , c , d;
char arr[105][105];
bool visited[105][105] = {0};
int dx[] = {-1, 1 , 0 , 0};
int dy[] = {0 , 0 , 1 , -1};

void nhap()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            cin >> arr[i][j];
    cin >> a >> b >> c >> d;
    memset(visited , false , sizeof(visited));
}

struct point
{
    int x , y , fee;
};

void bfs()
{
    queue<point> q;
    q.push({a , b , 0});
    visited[a][b] = 1;
    while(!q.empty())
    {
        point tmp = q.front(); q.pop();
        int x = tmp.x, y = tmp.y;
        //cout << x << " " << y << " " << tmp.fee << endl;
        if(x == c && y == d)
        {
            cout << tmp.fee << endl;
            return;
        }
        x = tmp.x + 1;
        while(x < n && !visited[x][y] && arr[x][y] == '.')
        {
            q.push({x , y , tmp.fee + 1});
            visited[x][y] = 1;
            x++;
        }
        x = tmp.x - 1;
        while(x >= 0 && !visited[x][y] && arr[x][y] == '.')
        {
            q.push({x , y , tmp.fee + 1});
            visited[x][y] = 1;
            x--;
        }
        x = tmp.x;
        y = tmp.y + 1;
        while(y < n && !visited[x][y] && arr[x][y] == '.')
        {
            q.push({x , y , tmp.fee + 1});
            visited[x][y] = 1;
            y++;
        }
        x = tmp.x;
        y = tmp.y - 1;
        while(y >= 0 && !visited[x][y] && arr[x][y] == '.')
        {
            q.push({x , y , tmp.fee + 1});
            visited[x][y] = 1;
            y--;
        }
    }
    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        nhap();
        bfs();
    }
}
