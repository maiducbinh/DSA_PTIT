#include <bits/stdc++.h>

using namespace std;
int m;
void step(int n , int cnt)
{
    if(n == 1)
    {
        m = min(m , cnt);
        return;
    }
    if(n % 3 == 0 && cnt + 1 < m)
    {
        step(n / 3 , cnt + 1);
    }
    if(n % 2 == 0 && cnt + 1 < m)
    {
        step(n / 2 , cnt + 1);
    }
    if(n > 1 && cnt + 1 < m)
    {
        step(n - 1 , cnt + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        m = 1e9;
        step(n , 0);
        cout << m << endl;
    }
}
