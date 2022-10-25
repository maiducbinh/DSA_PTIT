#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int n , m , u , ok;
bool visited[1001];
vector<int> adj[1001];
vector<pair<int,int>> tree;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty())
    {
        if(tree.size() == n - 1) {
            ok = 1;
            return;
        }
        int v = q.front(); q.pop();
        for(int x : adj[v])
            if(!visited[x])
            {
                tree.pb({v , x});
                q.push(x);
                visited[x] = true;
            }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        tree.clear();
        memset(visited , false , sizeof(visited));
        memset(adj , 0 , sizeof(adj));
        cin >> n >> m >> u;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        ok = 0;
        bfs(u);
        if(!ok) cout << -1 << endl;
        else{
            for(pair<int,int> x : tree)
                cout << x.first << " " << x.second << endl;
        }
    }
}
