#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
vector<ll> v;

void init()
{
    for(int i = 100 ; i > 0 ; i--)
        v.push_back(i * i * i);
}

string solve(string s)
{
    for(ll i : v)
    {
        string tmp = to_string(i);
        int idx = 0;
        for(char j : s)
            if(j == tmp[idx]) idx++;
        if(idx == tmp.size()) return tmp;
    }
    return "-1";
}
int main()
{
    init();
    int t;
    cin >> t;
    //for(ll i : v) cout << i << " ";
    while(t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}
