#include <bits/stdc++.h>

using namespace std;
int n;
vector<string> v;

void xuli()
{
    queue<string> q;
    q.push("1");

    while(1)
    {
        if(v.size() == n) break;
        string s = q.front(); q.pop();
        v.push_back(s);
        q.push(s + "0");
        q.push(s + "1");
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
        xuli();
        for(string x : v)
            cout << x << " ";
        cout << endl;
    }
}
