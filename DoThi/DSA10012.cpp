#include <bits/stdc++.h>

using namespace std;
int n , m;
bool visited[1001];
vector<int> adj[1001];

int bfs(int u , int v)
{
    queue<pair<int,int>> q;
    q.push({u , 0});
    visited[u] = true;

    while(!q.empty())
    {
        pair<int,int> i = q.front(); q.pop();
        int dinh = i.first , cphi = i.second;
        for(int x : adj[dinh])
            if(!visited[x])
            {
                visited[x] = true;
                if(x == v) return cphi + 1;
                q.push({x , cphi + 1});
            }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(adj , 0 , sizeof(adj));
        memset(visited , false , sizeof(visited));
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        double ans = 0;
        int val = 0 , dem = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if(i != j)
                {
                    memset(visited , false , sizeof(visited));
                    int ddi = bfs(i , j);
                    if(ddi != -1)
                    {
                        ans += ddi;
                        dem++;
                    }
                }
            }
        }
        double res = (double)(ans / dem);
        cout << setprecision(2) << fixed << res << endl;
    }
}
