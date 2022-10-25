#include <bits/stdc++.h>

using namespace std;
struct canh
{
    int x , y , w;
};
int parent[1001] , sz[1001];
int n , m;
vector <canh> dscanh;
int findPar(int u)
{
    if(u == parent[u]) return u;
    else return parent[u] = findPar(parent[u]);
}

bool Union(int u , int v)
{
    u = findPar(u);
    v = findPar(v);
    if(u == v) return false;
    if(sz[u] < sz[v]) swap(u , v);
    sz[u] += sz[v];
    parent[v] = u;
    return true;
}


void ktao()
{
    for(int i = 1 ; i <= n ; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
    dscanh.clear();
}

void kruskal()
{
    sort(begin(dscanh) , end(dscanh) , [](canh a , canh b)->bool{
         return a.w < b.w;
    });
    int ans = 0;
    vector <canh> tree;
    for(int i = 0 ; i < m ; i++)
    {
        if(tree.size() == n - 1) break;
        if(Union(dscanh[i].x , dscanh[i].y))
        {
            tree.push_back(dscanh[i]);
            ans += dscanh[i].w;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ktao();
        for(int i = 0 ; i < m ; i++)
        {
            int a , b , c;
            cin >> a >> b >> c;
            dscanh.push_back({a , b , c});
        }
        kruskal();
    }
}
