#include <bits/stdc++.h>

using namespace std;
int n , x[11] , a[11] , ok;

void ktao()
{
    for(int i = 1 ; i <= n ; i++) x[i] = i;
}

void sinh()
{
    int i = n - 1;
    while(x[i] > x[i + 1]) i--;
    if(i == 0) ok = 0;
    else{
        int j = n;
        while(x[j] < x[i]) j--;
        swap(x[i] , x[j]);
        reverse(x + i + 1 , x + n + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        int cnt = 1;
        ktao();
        ok = 1;
        while(ok)
        {
            bool check = true;
            for(int i = 1 ; i <= n ; i++)
                if(a[i] != x[i]) check = false;
            if(check) {
                cout << cnt;
                ok = 0;
            }
            cnt++;
            sinh();
        }
        cout << endl;
    }
}
