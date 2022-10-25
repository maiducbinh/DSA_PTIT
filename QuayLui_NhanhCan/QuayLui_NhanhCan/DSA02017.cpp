#include <bits/stdc++.h>

using namespace std;
int a[9][9] , cot[9] , cc[20] , cp[20];
int amax , ans , sum;

void nhap()
{
    memset(a , 0 , sizeof(a));
    memset(cot , 0 , sizeof(cot));
    memset(cc , 0 , sizeof(cc));
    memset(cp , 0 , sizeof(cp));
    amax = INT_MIN;
    for(int i = 1 ; i <= 8 ; i++)
        for(int j = 1 ; j <= 8 ; j++)
        {
            cin >> a[i][j];
            amax = max(a[i][j] , amax);
        }
    ans = INT_MIN;
    sum = 0;
}

void Try(int i)
{
    for(int j = 1 ; j <= 8 ; j++)
        if(!cot[j] && !cc[i + j - 1] && !cp[8 + i - j])
        {
            cot[j] = cc[i + j - 1] = cp[8 + i - j] = 1;
            sum += a[i][j];
            if(i == 8) ans = max(ans , sum);
            else
                if(sum + (8 - i) * amax >= ans)
                    Try(i + 1);
            cot[j] = cc[i + j - 1] = cp[8 + i - j] = 0;
            sum -= a[i][j];
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        nhap();
        Try(1);
        cout << ans << endl;
    }
}
