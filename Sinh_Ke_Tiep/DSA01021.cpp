#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        int x[k + 1];
        set <int> s;
        for(int i = 1 ; i <= k ; i++) {
            cin >> x[i];
            s.insert(x[i]);
        }
        int i = k;
        while(x[i] == n - k + i && i > 0) i--;
        if(i == 0) cout << k;
        else
        {
            int cnt = 0;
            x[i]++;
            for(int j = i + 1 ; j <= k ; j++) x[j] = x[j - 1] + 1;
            for(int j = 1 ; j <= k ; j++)
                if(!s.count(x[j])) cnt++;
            cout << cnt;
        }
        cout << endl;
    }
}
