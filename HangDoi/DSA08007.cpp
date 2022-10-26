#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<long long> v;

void init()
{
    queue<string> q;
    q.push("1");

    while(1)
    {
        string top = q.front(); q.pop();
        if(top.size() == 19) break;
        q.push(top + "0");
        q.push(top + "1");
        v.push_back(stoll(top));
    }
}
int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll cnt = upper_bound(v.begin() , v.end() , n) - v.begin();
        cout << cnt << endl;
    }
}
