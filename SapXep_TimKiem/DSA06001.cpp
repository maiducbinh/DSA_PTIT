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
        sort(a , a + n);
        int i = 0 , j = n - 1;
        while(i < j)
        {
            cout << a[j--] << ' ';
            cout << a[i++] << ' ';
        }
        if(i == j) cout << a[i] << ' ';
        cout << endl;
    }
}
