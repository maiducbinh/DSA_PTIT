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
        int a[n] , b[n - 1];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        for(int i = 0 ; i <= n ; i++)
            if(a[i] != b[i])
            {
                cout << i + 1 << endl;
                break;
            }
    }
}
