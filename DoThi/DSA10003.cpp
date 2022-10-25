#include <bits/stdc++.h>

using namespace std;

int sz[1001] , parent[1001];
int n , m;

int findPar(int u)
{
    if(u == parent[u]) return u;
    else return parent[u] = findPar(parent[u]);
}

bool Union(int a , int b)
{
    a = findPar(a);
    b = findPar(b);
    if(a == b) return false;
    if(sz[a] < sz[b]) swap(a , b);
    sz[a] += sz[b];
    parent[b] = a;
    return true;
}

void ktao()
{
    for(int i = 1 ; i <= n ; i++)
    {
        parent[i] = i;
        sz[i] = i;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ktao();
        bool ok = false;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            if(!Union(x , y))
                ok = true;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
