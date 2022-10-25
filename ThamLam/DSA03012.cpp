#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int dd[256] = {0};
        string s;
        cin >> s;
        for(char i : s) dd[i]++;
        int m = 0;
        for(char i : s)
            m = max(m , dd[i]);
        cout << (s.size() - m >= m - 1? 1 : -1) << endl;
    }
}
