#include <bits/stdc++.h>

using namespace std;
int n , k , x[11] , a[11];
bool ok;
void in(int m)
{
    cout << "[";
    for(int i = 1 ; i < m ; i++)
        cout << x[i] << " ";
    cout << x[m] << "] ";
}
void Try(int i , int pos , int sum)
{
    if(sum == k) {
        in(i - 1);
        ok = true;
    }
    for(int j = pos ; j <= n ; j++)
        if(sum + a[j] <= k)
        {
            x[i] = a[j];
            Try(i + 1 , j + 1 , sum + a[j]);
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        sort(a + 1 , a + n + 1);
        ok = false;
        Try(1 , 1 , 0);
        if(!ok) cout << -1;
        cout << endl;
    }
}
