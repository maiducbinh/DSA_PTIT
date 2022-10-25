#include <bits/stdc++.h>

using namespace std;
int n , m , color[1001];
vector<int> adj[1001];

int dfs(int u , int par)
{
    color[u] = 3 - color[par];

    for(int v : adj[u])
        if(color[v] == 0)
        {
            if(!dfs(v , u)) return false;
        }
        else if(color[u] == color[v]) return false;
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(adj , 0 , sizeof(adj));
        memset(color , 0 , sizeof(color));
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ok = 1;
        color[0] = 2;
        for(int i = 1 ; i <= n ; i++)
            if(color[i] == 0)
            {
                if(!dfs(i , 0)) ok = 0;
            }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
