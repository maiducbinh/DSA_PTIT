#include <bits/stdc++.h>

using namespace std;
int n , m , s , t;
vector<int> ke[1001];
bool visited[1001];
int parent[1001];
void dfs(int u , int par)
{
    visited[u] = true;
    parent[u] = par;

    for(int v : ke[u])
        if(!visited[v]) dfs(v , u);
}
int main()
{
    int k;
    cin >> k;
    while(k--)
    {
        memset(ke , 0 , sizeof(ke));
        memset(visited , false , sizeof(visited));
        memset(parent , 0 , sizeof(parent));
        cin >> n >> m >> s >> t;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i = 1 ; i <= n ; i++)
            sort(ke[i].begin() , ke[i].end());
        dfs(s , -1);
        if(!visited[t]) cout << -1;
        else
        {
            stack<int> st;
            while(t != -1)
            {
                st.push(t);
                t = parent[t];
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
