#include <bits/stdc++.h>

using namespace std;
int n , m , u;
vector<pair<int,int>> ke[1005];

void dijkstra(int s)
{
    int d[n + 1];
    for(int i = 1 ; i <= n ; i++) d[i] = 1e9;
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> q;
    q.push({0 , s});
    d[s] = 0;

    while(!q.empty())
    {
        pair<int,int> top = q.top(); q.pop();
        int kc = top.first, v = top.second;
        if(kc > d[v]) continue;
        for(auto i : ke[v])
        {
            int x = i.first , w = i.second;
            if(d[x] > d[v] + w)
            {
                d[x] = d[v] + w;
                q.push({d[x] , x});
            }
        }
    }
    for(int i = 1 ; i <= n ; i++)
        cout << d[i] << " ";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 0 ; i < 1005 ; i++)
            ke[i].clear();
        cin >> n >> m >> u;
        while(m--)
        {
            int x , y , w;
            cin >> x >> y >> w;
            ke[x].push_back({y , w});
            ke[y].push_back({x , w});
        }
        dijkstra(u);
        cout << endl;
    }
}
