#include <bits/stdc++.h>

using namespace std;

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
        int m = 1e9;
        sort(a , a + n);
        for(int i = 1 ; i < n ; i++)
            m = min(m , a[i] - a[i - 1]);
        cout << m << endl;
    }
}
