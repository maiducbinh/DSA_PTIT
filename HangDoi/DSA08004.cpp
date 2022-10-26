#include <bits/stdc++.h>

using namespace std;

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
        map<char,int> m;
        for(char i : s) m[i]++;
        priority_queue<int> q;
        for(auto i : m)
            q.push(i.second);
        long long ans = 0;
        while(k--)
        {
            int top = q.top(); q.pop();
            top--;
            q.push(top);
        }
        while(!q.empty())
        {
            long long top = q.top(); q.pop();
            ans += top * top;
        }
        cout << ans << endl;
    }
}
