#include <bits/stdc++.h>

using namespace std;
int ok = 1 , cnt = 0;
long long b[501];
string s;

void ktao()
{
    s = string(19 , '0');
}

void sinh()
{
    int i = s.size() - 1;
    while(s[i] == '9' && i >= 0)
    {
        s[i] = '0';
        i--;
    }
    if(i == -1) ok = 0;
    else s[i] = '9';
}

void xuli()
{
    vector <string> v;
    ktao();
    while(ok)
    {
        v.push_back(s);
        sinh();
    }
    for(int i = 1 ; i <= 500 ; i++)
    {
        for(string x : v)
        {
            long long y = stoll(x);
            if(y % i == 0 && y != 0)
            {
                b[i] = y;
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
        int x;
        cin >> x;
        cout << b[x] << endl;
    }
}
