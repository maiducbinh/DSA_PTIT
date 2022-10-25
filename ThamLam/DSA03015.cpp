#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , s , m;
        cin >> n >> s >> m;
        int ngay = s - s / 7;
        int ans = -1;
        for(int i = 1 ; i <= ngay ; i++)
            if(i * n >= m * s)
            {
                ans = i;
                break;
            }
        cout << ans << endl;
    }
}
