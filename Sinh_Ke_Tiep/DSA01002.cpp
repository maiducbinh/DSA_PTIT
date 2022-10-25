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
        int x[n + 1];
        for(int i = 1 ; i <= k ; i++) cin >> x[i];
        int i = k;
        while(x[i] == n - k + i && i > 0) i--;
        if(i == 0)
        {
            for(int j = 1 ; j <= k ; j++) cout << j << ' ';
        }
        else
        {
            x[i]++;
            for(int j = i + 1 ; j <= k ; j++) x[j] = x[j - 1] + 1;
            for(int j = 1 ; j <= k ; j++) cout << x[j] << ' ';
        }
        cout << endl;
    }
}
