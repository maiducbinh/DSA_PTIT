#include <bits/stdc++.h>

using namespace std;
int n , m , u , v;
vector<int> ke[1001];
bool visited[1001];
int parent[1001];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty())
    {
        int v = q.front() ; q.pop();
        for(int x : ke[v])
        {
            if(!visited[x])
            {
                parent[x] = v;
                visited[x] = true;
                q.push(x);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(ke , 0 , sizeof(ke));
        memset(visited , false , sizeof(visited));
        memset(parent , 0 , sizeof(parent));
        cin >> n >> m >> u >> v;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i = 1 ; i <= n ; i++)
            sort(ke[i].begin() , ke[i].end());
        parent[u] = -1;
        bfs(u);
        if(!visited[v]) cout << -1;
        else{
            stack<int> st;
            while(v != -1)
            {
                st.push(v);
                v = parent[v];
            }
            while(!st.empty())
            {
                cout << st.top() << " ";
                st.pop();
            }
        }
        cout << endl;
    }
}
