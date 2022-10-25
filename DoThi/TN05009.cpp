#include <bits/stdc++.h>

using namespace std;
int n , m , last;
vector<int> ke[1001];
bool visited[1001];
int parent[1001];
bool check;

void dfs(int u , int par)
{
    if(check) return;

    visited[u] = true;
    parent[u] = par;

    for(int v : ke[u])
        if(!visited[v])
        {
            dfs(v , u);
        }
        else if(v != parent[u] && v == 1)//lam nguoc(v da duoc danh dau ma v ko phai cha u thi moi co chu trinh)
        {
            last = u;
            check = true;
            return;
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
        check = false;
        dfs(1 , -1);
        if(check)
        {
            stack <int> st;
            while(last != -1)
            {
                st.push(last);
                last = parent[last];
            }
            while(!st.empty())
            {
                cout << st.top() << " ";
                st.pop();
            }
            cout << 1;
        }
        else cout << "NO";
        cout << endl;
    }
}
