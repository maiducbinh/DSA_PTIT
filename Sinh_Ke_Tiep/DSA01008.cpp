#include <bits/stdc++.h>

using namespace std;

int n , k , ok , x[17];

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
    int cnt = 0;
    for(int i = 1 ; i <= n ; i++)
        cnt += x[i];
    return cnt == k;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        memset(x , 0 , sizeof(x));
        ok = 1;
        while(ok)
        {
            if(check())
            {
                for(int i = 1 ; i <= n ; i++) cout << x[i];
                cout << endl;
            }
            sinh();
        }
    }
}
