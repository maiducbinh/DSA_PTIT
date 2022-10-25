#include <bits/stdc++.h>

using namespace std;
int start[1001] , dd[1001] = {0};
vector <int> ke[1001];

void dfs(int u , int start[] , int i)
{
    dd[u] = start[i];
    for(int v : ke[u])
        if(dd[v] == start[i - 1])
            dfs(v , start , i);
}

int main()
{
    int k , n , m;
    cin >> k >> n >> m;
    for(int i = 1 ; i <= k ; i++)
        cin >> start[i];
    while(m--)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
    }
    for(int i = 1 ; i <= k ; i++)
    {
        if(dd[start[i]] == start[i - 1])
            dfs(start[i] , start , i);
    }
    int cnt = 0;
    for(int i = 1 ; i <= n ; i++)
        if(dd[i] == start[k]) cnt++;
    cout << cnt;
}
