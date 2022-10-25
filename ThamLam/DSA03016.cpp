#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s , d;
        cin >> s >> d;
        if(9 * d < s || (d > 1 && s == 0)) cout << -1;
        else{
            int a[d];
            s -= 1;
            for(int i = d - 1 ; i >= 0 ; i--)
            {
                if(s >= 9)
                {
                    a[i] = 9;
                    s -= 9;
                }
                else
                {
                    a[i] = s;
                    s = 0;
                }
            }
            a[0] += 1;
            for(int i : a) cout << i;
        }
        cout << endl;
    }
}
