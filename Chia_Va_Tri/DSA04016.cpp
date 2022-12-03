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
        int a[n] , b[m];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        int i = 0 , j = 0 , cnt = 0 , ok = 1;
        while(i < n && j < m && ok)
        {
            if(a[i] > b[j])
            {
                cnt++;
                if(cnt == k)
                {
                    cout << b[j] << endl;
                    ok = 0;
                }
                j++;
            }
            else
            {
                cnt++;
                if(cnt == k)
                {
                    cout << a[i] << endl;
                    ok = 0;
                }
                i++;
            }
        }
        while(i < n && ok)
        {
            cnt++;
            if(cnt == k)
            {
                cout << a[i] << endl;
                ok = 0;
            }
            i++;
        }
        while(j < m && ok)
        {
            cnt++;
            if(cnt == k)
            {
                cout << b[j] << endl;
                ok = 0;
            }
            j++;
        }
    }
}
