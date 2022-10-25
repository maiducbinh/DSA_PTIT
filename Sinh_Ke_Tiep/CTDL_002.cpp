#include <bits/stdc++.h>

using namespace std;
int n , a[1001] , x[1001] = {0} , ok = 1 , k;

void sinh()
{
    int i = n;
    while(x[i] == 1 && i > 0)
    {
        x[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else x[i] = 1;
}

bool check()
{
    long long sum = 0;
    for(int i = 1 ; i <= n ; i++)
        sum += a[i] * x[i];
    return sum == k;
}

int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    int cnt = 0;
    while(ok)
    {
        if(check())
        {
            cnt++;
            for(int i = 1 ; i <= n ; i++)
                if(x[i] == 1) cout << a[i] << ' ';
            cout << endl;
        }
        sinh();
    }
    cout << cnt;
}
