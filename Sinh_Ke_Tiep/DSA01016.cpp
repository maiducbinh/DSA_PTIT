#include <bits/stdc++.h>

using namespace std;

int n , cnt , ok , x[11];

void ktao()
{
    cnt = 1;
    x[cnt] = n;
}

void sinh()
{
    int i = cnt;
    while(x[i] == 1 && i > 0) i--;
    if(i == 0) ok = 0;
    else
    {
        x[i]--;
        int res = cnt - i + 1;
        int d = res / x[i];
        int r = res % x[i];
        cnt = i;
        while(d--) x[++cnt] = x[i];
        if(r) x[++cnt] = r;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ktao();
        ok = 1;
        vector<string> v;
        while(ok)
        {
            string s = "";
            s += '(';
            for(int i = 1 ; i <= cnt ; i++)
                s += to_string(x[i]) + " ";
            s.pop_back();
            s += ')';
            v.push_back(s);
            sinh();
        }
        for(string x : v) cout << x << ' ';
        cout << endl;
    }
}
