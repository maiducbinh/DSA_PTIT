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
        x[0] = 0;
        for(int i = 1 ; i <= k ; i++) cin >> x[i];
        int i = k;
        while(x[i] == x[i - 1] + 1 && i > 0)
        {
            i--;
        }
        if(i == 0)
            for(int j = 1 ; j <= k ; j++) x[j] = n - k + j;
        else
        {
            x[i]--;
            for(int j = i + 1 ; j <= k ; j++)
                x[j] = n - k + j;
        }
        for(int j = 1 ; j <= k ; j++) cout << x[j] << ' ';
        cout << endl;
    }
}
