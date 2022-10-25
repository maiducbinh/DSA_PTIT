#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        map<char , int> m;
        for(char i : s) m[i]++;
        priority_queue<int> q;
        for(auto i : m)
            q.push(i.second);
        while(k--)
        {
            int u = q.top();
            q.pop();
            u--;
            q.push(u);
        }
        long long sum = 0;
        while(!q.empty())
        {
            int u = q.top();
            q.pop();
            sum += 1ll * u * u;
        }
        cout << sum << endl;
    }
}
