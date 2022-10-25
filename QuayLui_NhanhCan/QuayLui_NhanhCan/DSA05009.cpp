#include <bits/stdc++.h>

using namespace std;
int n , a[101] , s;
bool ok;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        s = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if(s % 2)
            cout << "NO";
        else
        {
            s /= 2;
            ok = false;
            int f[s + 1] = {0};
            f[0] = 1;
            for(int i = 1 ; i <= n ; i++)
                for(int j = s ; j >= a[i] ; j--)
                    if(f[j - a[i]]) f[j] = 1;
            cout << (f[s] ? "YES" : "NO");
        }
        cout << endl;
    }
}
