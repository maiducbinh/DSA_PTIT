#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll ans = 1e18;
int n;
int prime[] = {2 , 3 , 5 , 7 , 11 , 13 , 19 , 23 , 29 , 31};

void Try(int i , ll res , ll product)
{
    if(res > n) return;
    if(res == n) ans = min(ans , product);
    for(int j = 1 ; ; j++)
    {
        if(product * prime[i] > ans) break;
        product *= prime[i];
        Try(i + 1 , res * (j + 1) , product);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ans = 1e18;
        Try(0 , 1 , 1);
        cout << ans << endl;
    }
}
