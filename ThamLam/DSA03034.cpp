#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , m , k;
        cin >> n >> m >> k;
        int a[n] , b[m] , c[k];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        for(int &i : c) cin >> i;
        int x = 0 , y = 0 , z = 0 , ok = 0;
        while(x < n && y < m && z < k)
        {
            if(a[x] == b[y] && b[y] == c[z])
            {
                cout << a[x] << " ";
                x++ ; y++; z++;
                ok = 1;
            }
            else if(a[x] < b[y]) x++;
            else if(b[y] < c[z]) y++;
            else z++;
        }
        if(!ok) cout << "NO";
        cout << endl;
    }
}
