#include <bits/stdc++.h>

using namespace std;
int n , x[1001] , ok;

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
    for(int i = 0 ; i <= n / 2 ; i++)
        if(x[i] != x[n - i + 1]) return false;
    return true;
}

int main()
{
    cin >> n;
    memset(x , 0 , sizeof(x));
    ok = 1;
    while(ok)
    {
        if(check())
        {
            for(int i = 1 ; i <= n ; i++)
                cout << x[i] << ' ';
            cout << endl;
        }
        sinh();
    }
}
