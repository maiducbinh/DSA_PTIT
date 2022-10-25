#include <bits/stdc++.h>

using namespace std;
int n , m;
vector<int> adj[1001];
vector<pair<int,int>> edge;
bool visited[1001];

void dfs(int u , int s , int t)
{
    visited[u] = true;

    for(int v : adj[u])
        if((u == s && v == t) || (u == t && v == s)) continue;
        else if(!visited[v]) dfs(v , s , t);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(adj , 0 , sizeof(adj));
        edge.clear();
        memset(visited , false , sizeof(visited));
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            if(x > y) swap(x , y);
            edge.push_back({x , y});
        }
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++)
            if(!visited[i])
            {
                dfs(i , 0 , 0);
                cnt++;
            }
        for(auto i : edge)
        {
            int dem = 0;
            memset(visited , false , sizeof(visited));
            int u = i.first , v = i.second;
            for(int j = 1 ; j <= n ; j++)
                if(!visited[j])
                {
                    dfs(j , u , v);
                    dem++;
                }
            if(dem > cnt) cout << u << " " << v << " ";
        }
        cout << endl;
    }
}
