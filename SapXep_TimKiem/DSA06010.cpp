#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        set<int> se;
        while(n--)
        {
            string s;
            cin >> s;
            for(char i : s)
                if(i >= '0' || i <= '9')
                    se.insert(i - '0');
        }
        for(int i : se)
            cout << i << ' ';
        cout << endl;
    }
}
