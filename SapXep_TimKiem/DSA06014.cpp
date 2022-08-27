#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e6;
int prime[maxn + 1];

void init()
{
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i <= maxn ; i++)
        prime[i] = 1;
    for(int i = 2 ; i <= sqrt(maxn) ; i++)
        for(int j = i * i ; j <= maxn ; j += i)
            prime[j] = 0;
}

void sum(int n)
{
    for(int i = 2 ; i <= n / 2 ; i++)
        if(prime[i] && prime[n - i])
        {
            cout << i << " " << n - i << endl;
            return;
        }
    cout << -1 << endl;
}
int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        sum(n);
    }
}
