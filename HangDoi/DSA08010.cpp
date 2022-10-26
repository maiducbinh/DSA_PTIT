#include <bits/stdc++.h>
#define fi first
#define se second

using namespace std;

int solve(int n)
{
    queue<pair<int,int>> q; q.push({n , 0});
    set<int> se; se.insert(n);

    while(!q.empty())
    {
        pair<int,int> top = q.front(); q.pop();
        if(top.fi == 1) return top.se;
        for(int i = 2 ; i <= sqrt(top.fi) ; i++)
            if(top.fi % i == 0)
            {
                int m = max(top.fi / i , i);
                if(!se.count(m))
                    q.push({m , top.se + 1}), se.insert(m);
            }
        if(!se.count(top.fi - 1) && top.fi > 1)
        {
            q.push({top.fi - 1 , top.se + 1});
            se.insert(top.fi - 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}
