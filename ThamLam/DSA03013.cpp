#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int d;
        cin >> d;
        string s;
        cin >> s;
        int dd[256] = {0};
        for(char i : s) dd[i]++;
        int m = 0;
        for(char i : s) m = max(m , dd[i]);
        int ans = (m - 1) * (d - 1);//tao ra duoc m - 1 khoang trong giua m ki tu giong nhau
                                    //moi khoang trong cho d - 1 ki tu
            if(ans > s.size() - m) cout << -1;
            else cout << 1;
            cout << endl;
    }
}
