#include <bits/stdc++.h>

using namespace std;
int n, ok = 1;
string s;

void sinh()
{
    int i = n - 1;
    while(s[i] == '8' && i >= 0)
    {
        s[i] = '6';
        i--;
    }
    if(i == -1) ok = 0;
    else s[i] = '8';
}

bool check()
{
    if(s[0] != '8' || s[n - 1] != '6') return false;
    else if(s.find("88") != string::npos) return false;
    else if(s.find("6666") != string::npos) return false;
    return true;
}

int main()
{
    cin >> n;
    s = string(n , '6');
    while(ok)
    {
        if(check())
            cout << s << endl;
        sinh();
    }
}
