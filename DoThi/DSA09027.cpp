#include <bits/stdc++.h>

using namespace std;
int n , m;
vector<int> ke[1001];
bool visited[1001];

void bfs(int u)
{
    queue <int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty())
    {
        int v = q.front();
        q.pop();

        for(int x : ke[v])
            if(!visited[x])
            {
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
        memset(ke , 0 ,sizeof(ke));
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int q;
        cin >> q;
        while(q--)
        {
            memset(visited , false , sizeof(visited));
            int u , v;
            cin >> u >> v;
            bfs(u);
            cout << (visited[v] ? "YES" : "NO") << endl;
        }
    }
}
