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
        int a[n] , dd[10005] = {0};
        for(int &i : a) {
            cin >> i;
            dd[i]++;
        }
        sort(a , a + n);
        int l = a[0] , r = a[n - 1];
        int cnt = 0;
        for(int i = l ; i < r ; i++)
        {
            if(!dd[i]) cnt++;
        }
        cout << cnt << endl;
    }
}
