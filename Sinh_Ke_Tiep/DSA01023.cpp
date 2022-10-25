#include <bits/stdc++.h>

using namespace std;
int n , k , x[15] , a[15] , ok;

void ktao()
{
    for(int i = 1 ; i <= k ; i++) x[i] = i;
}

void sinh()
{
    int i = k;
    while(x[i] == n - k + i && i > 0) i--;
    if(i == 0) ok = 0;
    else{
        x[i]++;
        for(int j = i + 1 ; j <= k ; j++)
            x[j] = x[j - 1] + 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1 ; i <= k ; i++) cin >> a[i];
        ktao();
        ok = 1;
        int cnt = 1;
        while(ok)
        {
            bool check = true;
            for(int i = 1 ; i <= k ; i++)
                if(a[i] != x[i]) check = false;
            if(check)
            {
                cout << cnt;
                ok = 0;
            }
            cnt++;
            sinh();
        }
        cout << endl;
    }
}
