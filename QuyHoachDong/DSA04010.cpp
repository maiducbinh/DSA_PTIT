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
        int s = 0 , e = 0;
        for(int i = 0 ; i < n ; i++)
        {
            e = max(a[i] , e + a[i]);
            s = max(s , e);
        }
        cout << s << endl;
    }
}
