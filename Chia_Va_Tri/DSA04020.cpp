#include <bits/stdc++.h>

using namespace std;
int bi_se(int a[] , int l , int r , int x)
{
    if(l > r) return -1;
    int m = (l + r) / 2;
    if(a[m] == x) return m;
    else
        if(a[m] > x) return bi_se(a , l , m - 1 , x);
        else return bi_se(a , m + 1 , r , x);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , x;
        cin >> n >> x;
        int a[n];
        for(int &i : a) cin >> i;
        int ans = bi_se(a , 0 , n - 1 , x);
        if(ans == -1) cout << "NO";
        else cout << ans + 1;
        cout << endl;
    }
}
