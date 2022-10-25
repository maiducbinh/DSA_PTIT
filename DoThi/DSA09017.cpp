#include <bits/stdc++.h>

using namespace std;
int n , m;
vector<int> adj[1001];
int parent[1001];
bool visited[1001];

void dfs(int u)
{
    visited[u] = true;

    for(int v : adj[u])
        if(!visited[v]) dfs(v);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(adj , 0 , sizeof(adj));
        cin >> n;
        for(int i = 1 ; i < n ; i++)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(visited , false , sizeof(visited));
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++)
            if(!visited[i])
            {
                dfs(i);
                cnt++;
            }
        cout << (cnt == 1 ? "YES" : "NO") << endl;// vi co n - 1 canh nen chi can dem so tplt
    }
}
