#include <bits/stdc++.h>

using namespace std;
vector<int> adj[1001];
int n , m , color[1001];

bool dfs(int u)
{
    color[u] = 1;

    for(int v : adj[u])
        if(color[v] == 0)
        {
            if(dfs(v)) return true;
        }
        else {
            if(color[v] == 1) return true;
        }
    color[u] = 2;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(adj, 0 , sizeof(adj));//quen memset
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        memset(color , 0 , sizeof(color));
        int ok = 0;
        for(int i = 1 ; i <= n ; i++)
            if(!color[i] && dfs(i))
            {
                ok = 1;
                break;
            }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
