#include <bits/stdc++.h>

using namespace std;
int n , m , a[1001][1001];
vector<int> ke[1001];
bool visited[1001];

bool bfs(int u)
{
    queue<pair<int,int>> q;
    q.push({u , 0});
    visited[u] = 1;
    while(!q.empty())
    {
        pair<int,int> top = q.front(); q.pop();
        int v = top.first;
        for(int i : ke[v])
        {
            if(!visited[i])
            {
                q.push({i , top.second + a[v][i]});
                visited[i] = 1;
            }
            else if(i == u && top.second + a[v][i] < 0)
                return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 0 ; i < 1001 ; i++)
            ke[i].clear();
        memset(visited , false , sizeof(visited));
        cin >> n >> m;
        while(m--)
        {
            int x , y , w;
            cin >> x >> y >> w;
            ke[x].push_back(y);
            //ke[y].push_back(x);
            a[x][y] = w;
        }
        int ok = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            ok = bfs(i);
            if(ok) break;
            memset(visited , false , sizeof(visited));
        }
        cout << ok << endl;
    }
}
