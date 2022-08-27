#include <bits/stdc++.h>

using namespace std;
int n , k , s , x[21] , cnt;

void in(int m)
{
    for(int i = 1 ; i <= m ; i++)
        cout << x[i] << ' ';
    cout << endl;
}

void Try(int i , int pos , int sum)
{
    if(sum == s && i - 1 == k) {
        cnt++;
        //in(i - 1);
    }
    for(int j = pos ; j <= n ; j++)
        if(sum + j <= s)
        {
            x[i] = j;
            Try(i + 1 , j + 1 , sum + j);
        }
}

int main()
{
    while(1)
    {
        cin >> n >> k >> s;
        if(n + k + s == 0)
            break;
        cnt = 0;
        Try(1 , 1 , 0);
        cout << cnt << endl;
    }
}
