#include <bits/stdc++.h>

using namespace std;
int l , r;
vector<int> v;

bool check(string tmp)
{
    set<char> se;
    for(char i : tmp)
        if(!se.count(i)) se.insert(i);
        else return false;
    return true;
}
void solve()
{
    queue<string> q;
    for(int i = 1 ; i <= 5 ; i++)
        q.push(to_string(i));

    while(1)
    {
        string s = q.front(); q.pop();
        if(s.size() == 6) break;
        v.push_back(stoi(s));
        for(char i = '0' ; i <= '5' ; i++)
        {
            string tmp = s + i;
            if(check(tmp))
                q.push(tmp);
        }
    }
}
int main()
{
    solve();
    //cout << v.size() << endl;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        int cnt = 0;
        for(int i : v)
            if(i >= l && i <= r) cnt++;
        cout << cnt << endl;
    }
}
