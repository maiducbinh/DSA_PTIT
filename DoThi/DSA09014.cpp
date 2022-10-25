#include <bits/stdc++.h>

using namespace std;
int n , m;
vector<int> ke[1001];
int parent[1001] , sz[1001];

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

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(ke , 0 , sizeof(ke));
        cin >> n >> m;
        for(int i = 1 ; i <= n ; i++)
        {
            parent[i] = i;
            sz[i] = i;
        }
        int ok = 0;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            if(!Union(x , y))
                ok = 1;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
