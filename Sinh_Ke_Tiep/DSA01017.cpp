#include <bits/stdc++.h>

using namespace std;

string gray(string s)
{
    string ans = "";
    ans += s[0];
    for(int i = 1 ; i < s.size() ; i++)
    {
        int u = s[i - 1];
        int v = s[i];
        int res = u ^ v;
        ans += to_string(res);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << gray(s) << endl;
    }
}
