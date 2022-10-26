#include <bits/stdc++.h>

using namespace std;
int n;
vector<string> v;

void xuli()
{
    queue <string> q;
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
        cin >> n;
        v.clear();
        xuli();
        cout << v.size() <<endl;
        reverse(v.begin() , v.end());
        for(string x : v)
            cout << x << " ";
        cout << endl;
    }
}
