#include <bits/stdc++.h>

using namespace std;
int n , m , u;
vector<int> ke[1001];
bool visited[1001];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : ke[v])
        {
            if(!visited[x])
            {
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
        cin >> n >> m >> u;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        for(int i = 1 ; i <= n ; i++)
            sort(ke[i].begin() , ke[i].end());
        bfs(u);
        cout << endl;
    }
}
