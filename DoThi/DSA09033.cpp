#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , m;
        cin >> n >> m;
        vector<int> adj[n + 1];
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ok = 1;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j : adj[i])
                if(adj[i].size() != adj[j].size()) ok = 0;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
