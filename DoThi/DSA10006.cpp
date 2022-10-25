#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int n , m , u;
vector<int> adj[1001];
int visited[1001] , parent[1001];
vector<pair<int,int>> tree;

void dfs(int u , int par)
{
    if(tree.size() == n) return;
    tree.pb({par , u});
    visited[u] = true;

    for(int v : adj[u])
        if(!visited[v]) dfs(v , u);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(adj , 0 , sizeof(adj));
        memset(visited , false , sizeof(visited));
        tree.clear();
        cin >> n >> m >> u;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        /*for(int i = 1 ; i <= n ; i++)
            sort(adj[i].begin() , adj[i].end());*/
        dfs(u , -1);
        if(tree.size() < n) cout << -1 << endl;
        else
        {
            for(int i = 1 ; i < tree.size() ; i++)
                cout << tree[i].first << " " << tree[i].second << endl;
        }
    }
}//note: sort la sai
