#include <bits/stdc++.h>

using namespace std;
vector<string> v;
int n;
void init()
{
    queue<string> q;
    q.push("6");
    q.push("8");

    while(1)
    {
        string s = q.front(); q.pop();
        if(s.size() > n) break;
        v.push_back(s);
        q.push(s + "6");
        q.push(s + "8");
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        v.clear();
        cin >> n;
        init();
        cout << v.size() << endl;
        for(string x : v)
            cout << x << " ";
        cout << endl;
    }
}

