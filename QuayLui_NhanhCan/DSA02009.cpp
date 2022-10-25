#include <bits/stdc++.h>

using namespace std;
int n , k , sum , ok;
int a[21] , dd[21];

void Try(int s , int cnt)
{
    if(cnt == k)
    {
        ok = 1;
        return;
    }
    if(ok) return; //neu da co du k tap thi chot luon, ko co dong nay thi no se tim k tap tiep theo
    for(int j = 1 ; j <= n ; j++)
    {
        if(!dd[j])
        {
            dd[j] = 1;
            if(s == sum)
            {
                Try(0 , cnt + 1);
                return;
            }
            if(s > sum) return;
            else Try(s + a[j] , cnt);
        }
        dd[j] = 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        sum = 0;
        for(int i = 1 ; i <= n ; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % k != 0) cout << 0;
        else{
            memset(dd , 0 , sizeof(dd));
            ok = 0;
            sum /= k;
            Try(0 , 0);
            cout << ok;
        }
        cout << endl;
    }
}
