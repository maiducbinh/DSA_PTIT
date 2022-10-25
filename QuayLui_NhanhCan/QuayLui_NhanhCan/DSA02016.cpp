#include <bits/stdc++.h>

using namespace std;
int n , cnt;
int x[11] , cot[11] , chinh[30] , phu[30];

void Try(int i)
{
    for(int j = 1 ; j <= n ; j++)
        if(!cot[j] && !chinh[i + j - 1] && !phu[n + i - j])
        {
            cot[j] = chinh[i + j - 1] = phu[n + i - j] = 1;
            x[i] = j;
            if(i == n) cnt++;
            else Try(i + 1);
            cot[j] = chinh[i + j - 1] = phu[n + i - j] = 0;
        }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        memset(cot , 0 , sizeof(cot));
        memset(chinh , 0 , sizeof(chinh));
        memset(phu , 0 , sizeof(phu));
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
}
