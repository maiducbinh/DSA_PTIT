#include <bits/stdc++.h>

using namespace std;
string s;
int ok , n;

void sinh()
{
    int i = n - 1;
    while(s[i] == 'H' && i >= 0) {
        s[i] = 'A';
        i--;
    }
    if(i == -1) ok = 0;
    else s[i] = 'H';
}

bool check()
{
    if(s[0] != 'H' || s[n - 1] != 'A') return false;
    else
        if(s.find("HH") != string::npos) return false;
    return true;
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
            if(check())
            {
                cout << s << endl;
            }
            sinh();
        }
    }
}
