#include <bits/stdc++.h>

using namespace std;

int numPair(int b[] , int m , int x , int dd[])
{
    if(x == 0) return 0;
    if(x == 1) return dd[0];
    auto i = upper_bound(b , b + m , x);
    int ans = b + m - i;
    ans += dd[0] + dd[1];
    if(x == 2) ans -= dd[3] + dd[4];
    else
        if(x == 3) ans += dd[2];
    return ans;
}

int countPair(int a[] , int n , int b[] , int m)
{
    int dd[5] = {0};
    for(int i = 0 ; i < m ; i++)
        if(b[i] < 5) dd[b[i]]++;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++)
        cnt += numPair(b , m , a[i] , dd);
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , m;
        cin >> n >> m;
        int a[n] , b[m];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        sort(a , a + n);
        sort(b , b + m);
        cout << countPair(a , n , b , m) << endl;
    }
}
