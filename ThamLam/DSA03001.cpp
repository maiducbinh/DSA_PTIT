#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for(int j = 9 ; j >= 0 ; j--)
        {
            cnt += n / m[j];
            n %= m[j];
        }
        cout << cnt << endl;
    }
}
