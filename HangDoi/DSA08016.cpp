#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
string en;

int l1[] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
int r1[] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int l2[] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
int r2[] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};

string Rotate(string s, int a[])
{
    string tmp = "";
    for(int i = 0 ; i < 10 ; i++)
        tmp += s[a[i]];
    return tmp;
}
void BFS(string st)
{
    int ans = 1e9;
    queue<pair<string,int>> q1, q2;
    map<string,int> m;
    q1.push({st, 0});
    q2.push({en, 0});
    while(!q1.empty())
    {
        pair<string,int> top = q1.front(); q1.pop();
        string tmp = Rotate(top.fi, l1);
        if(!m[tmp])
        {
            m[tmp] = top.se + 1;
            q1.push({tmp, m[tmp]});
        }
        tmp = Rotate(top.fi, r1);
        if(!m[tmp])
        {
            m[tmp] = top.se + 1;
            q1.push({tmp, m[tmp]});
        }
        if(top.se == 14) break;
    }
    while(!q2.empty())
    {
        pair<string,int> top = q2.front(); q2.pop();
        if(m[top.fi])
        {
            ans = min(ans , m[top.fi] + top.se);
        }
        string tmp = Rotate(top.fi, l2);
        q2.push({tmp, top.se + 1});
        tmp = Rotate(top.fi, r2);
        q2.push({tmp, top.se + 1});
        if(top.se == 14) break;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        en = "1238004765";
        int a[10];
        for(int &i : a) cin >> i;
        string s = "";
        for(int i : a)
            s += to_string(i);
        BFS(s);
    }
}


