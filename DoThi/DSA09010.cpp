#include <bits/stdc++.h>

using namespace std;
int n , m;
vector<int> adj[1001];
bool visited[1001];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty())
    {
        int v = q.front(); q.pop();
        for(int x : adj[v])
            if(!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(adj , 0 , sizeof(adj));
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            //adj[y].push_back(x);
        }
        memset(visited , false , sizeof(visited));
        int ok = 1;
        for(int i = 1 ; i <= n ; i++)
        {
            bfs(i);
            for(int j = 1 ; j <= n ; j++)
                if(!visited[j])
                {
                    ok = 0;
                    break;
                }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}

