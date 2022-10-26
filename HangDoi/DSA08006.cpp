#include <bits/stdc++.h>

using namespace std;
vector<string> v;
int ans[101];

void init()
{
    queue<string> q;
    q.push("9");

    while(1)
    {
        string top = q.front();q.pop();
        if(top.size() == 19) break;
        q.push(top + "0");
        q.push(top + "9");
        v.push_back(top);
    }
}

void xuli()
{
    init();
    for(int i = 1 ; i <= 100 ; i++)
    {
        for(string x : v)
        {
            long long tmp = stoll(x);
            if(tmp % i == 0)
            {
                ans[i] = tmp;
                break;
            }
        }
    }
}
int main()
{
    xuli();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
}
