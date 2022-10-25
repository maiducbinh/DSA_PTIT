#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        int x[n + 1];
        for(int i = 1 ; i <= n ; i++) cin >> x[i];
        int i = n - 1;
        while(x[i] > x[i + 1]) i--;
        if(i == 0)
        {
            for(int j = 1 ; j <= n ; j++) cout << j << ' ';
        }
        else
        {
            int j = n;
            while(x[j] < x[i]) j--;
            swap(x[i] , x[j]);
            reverse(x + i + 2 , x + n + 1);
            for(int i = 1 ; i <= n ; i++)
                cout << x[i] << ' ';
        }
        cout << endl;
    }
}
