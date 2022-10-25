#include <bits/stdc++.h>

using namespace std;
char c , x[9];
bool dd[256] = {0};
int n;

bool chu(char x)
{
    return (x == 'A' || x == 'E');
}

bool check()
{
    for(int i = 2 ; i < n ; i++)
        if(chu(x[i]) && !chu(x[i + 1]) && !chu(x[i - 1])) return false;
    return true;
}

void xuli()
{
    if(check())
    {
        for(int i = 1 ; i <= n ; i++)
            cout << x[i];
        cout << endl;
    }
}

void Try(int i)
{
    for(char j = 'A' ; j <= c ; j++)
        if(!dd[j])
        {
            dd[j] = true;
            x[i] = j;
            if(i == n) xuli();
            else Try(i + 1);
            dd[j] = false;
        }
}
int main()
{
    cin >> c;
    n = c - 'A' + 1;
    Try(1);
}
