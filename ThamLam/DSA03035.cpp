#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n] , prev[n] = {0};
    for(int &i : a) cin >> i;
    int maxlen = 0;
    for(int i = 0 ; i < n ; i++)
    {
        prev[a[i]] = prev[a[i] - 1] + 1;//so phan tu nho hon a[i] dung truoc no
        maxlen = max(maxlen , prev[a[i]]);
    }
    cout << n - maxlen;
}
