#include <bits/stdc++.h>

using namespace std;
int n , m , u;
vector<int> ke[1001];
bool visited[1001];

void dfs(int u)
{
    cout << u << " ";
    visited[u] = true;
    for(int v : ke[u])
        if(!visited[v]) dfs(v);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> u;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        for(int i = 1 ; i <= n ; i++)
            sort(ke[i].begin() , ke[i].end());
        memset(visited , false , sizeof(visited));
        dfs(u);
        cout << endl;
        memset(ke , 0 , sizeof(ke));
    }
}
