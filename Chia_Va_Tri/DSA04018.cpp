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
        auto r = upper_bound(a , a + n , 0);
        cout << (r - a) << endl;
    }
}
