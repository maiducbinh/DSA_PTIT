#include <bits/stdc++.h>

using namespace std;

void solve(string s)
{
    int temp = s[0] - '0';
    cout << temp;
    for(int i = 1 ; i < s.size() ; i++)
        if(s[i] == '0')
        {
            cout << temp;
        }
        else
        {
            cout << 1 - temp;
            temp = 1 - temp;
        }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}
