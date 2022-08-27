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
        int cnt = 0;
        for(int i = 0 ; i < n - 1 ; i++)
        {
            int m = a[i] , pos;
            for(int j = i + 1 ; j < n ; j++)
                if(m > a[j])
                {
                    m = a[j];
                    pos = j;
                }
            if(m < a[i]) {
                swap(a[i] , a[pos]);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
