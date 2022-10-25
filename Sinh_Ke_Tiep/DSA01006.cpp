#include <bits/stdc++.h>

using namespace std;
int n , x[11] , ok;

void ktao()
{
    for(int i = 1 ; i <= n ; i++) x[i] = n - i + 1;
}

void sinh()
{
    int i = n - 1;
    while(x[i] < x[i + 1] && i > 0) i--;
    if(i == 0) ok = 0;
    else
    {
        int j = n;
        while(x[j] > x[i]) j--;
        swap(x[i] , x[j]);
        int l = i + 1 , r = n;
        while(l <= r)
        {
            swap(x[l] , x[r]);
            l++;
            r--;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ktao();
        ok = 1;
        while(ok)
        {
            for(int i = 1 ; i <= n ; i++) cout << x[i];
            cout << ' ';
            sinh();
        }
        cout << endl;
    }
}
