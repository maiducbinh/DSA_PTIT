#include <bits/stdc++.h>

using namespace std;
int n , m;
vector<int> ke[1001];
bool visited[1001];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty())
    {
        int v = q.front(); q.pop();
        for(int x : ke[v])
            if(!visited[x])
            {
                visited[x] = true;
                q.push(x);
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
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i = 1 ; i <= n ; i++)
            sort(ke[i].begin() , ke[i].end());
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++)
            if(!visited[i])
            {
                cnt++;
                bfs(i);
            }
        cout << cnt << endl;
    }
}
