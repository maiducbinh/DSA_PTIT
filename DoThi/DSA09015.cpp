#include <bits/stdc++.h>

using namespace std;
vector<int> adj[1001];
int n , m;
int parent[1001] , indegree[1001];
bool visited[1001];

bool kahn()
{
    queue<int> q;
    for(int i = 1 ; i <= n ; i++)
        if(!indegree[i]) q.push(i);
    int cnt = 0;
    while(!q.empty())
    {
        int v = q.front(); q.pop();
        cnt++;

        for(int x : adj[v])
        {
            indegree[x]--;
            if(!indegree[x]) q.push(x);
        }
    }
    return cnt < n;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(adj , 0 , sizeof(adj));
        memset(visited , false , sizeof(visited));
        memset(indegree , 0 , sizeof(indegree));
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            indegree[y]++;
        }
        cout << (kahn() ? "YES" : "NO") << endl;
    }
}
