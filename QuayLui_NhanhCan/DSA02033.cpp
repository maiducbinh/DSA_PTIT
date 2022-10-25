#include <bits/stdc++.h>

using namespace std;
int n , x[10] , dd[10];
bool check()
{
    for(int i = 2 ; i <= n ; i++)
        if(abs(x[i] - x[i - 1]) == 1) return false;
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
    for(int j = 1 ; j <= n ; j++)
        if(!dd[j])
        {
            dd[j] = 1;
            x[i] = j;
            if(i == n) xuli();
            else Try(i + 1);
            dd[j] = 0;
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        memset(dd , 0 , sizeof(dd));
        memset(x , 0 , sizeof(x));
        Try(1);
    }
}
