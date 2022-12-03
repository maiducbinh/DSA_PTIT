#include <bits/stdc++.h>

using namespace std;

int crossSum(int a[] , int l , int m , int r)
{
    int ls = 0 , sum = 0;
    for(int i = m ; i >= l ; i--)
    {
        sum += a[i];
        ls = max(sum , ls);
    }
    int rs = 0;
    sum = 0;
    for(int i = m + 1 ; i <= r ; i++)
    {
        sum += a[i];
        rs = max(sum , rs);
    }
    return max({ls , rs , ls + rs});
}

int maxSum(int a[] , int l , int r)
{
    if(l > r) return INT_MIN;
    if(l == r) return a[l];
    int m = (l + r) / 2;
    return max({maxSum(a , l , m) , maxSum(a , m + 1 , r) , crossSum(a , l , m , r)});
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        cout << maxSum(a , 0 , n - 1) << endl;
    }
}
