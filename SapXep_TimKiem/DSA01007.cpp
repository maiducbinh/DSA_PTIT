#include <bits/stdc++.h>

using namespace std;
int n , ok;
string s;

void sinh()
{
    int i = s.size() - 1;
    while(s[i] == 'B' && i >= 0)
    {
        s[i] = 'A';
        i--;
    }
    if(i == -1) ok = 0;
    else s[i] = 'B';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        s = string(n , 'A');
        ok = 1;
        while(ok)
        {
            cout << s << ' ';
            sinh();
        }
        cout << endl;
    }
}
