#include <bits/stdc++.h>

using namespace std;
int n , c[16][16] , cmin = 1e9 , x[16];
bool visited[16] = {0};

void nhap()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++)
        {
            cin >> c[i][j];
            if(i != j) cmin = min(cmin , c[i][j]);
        }
}
int sum = 0 , ans = 1e9;
void Try(int i)
{
    for(int j = 2 ; j <= n ; j++)
        if(!visited[j])
        {
            visited[j] = true;
            x[i] = j;
            sum += c[x[i - 1]][x[i]];
            if(i == n)
            {
                ans = min(ans , sum + c[x[n]][1]);
            }
            else if(sum + cmin * (n - i + 1) <= ans)
            {
                Try(i + 1);
            }
            visited[j] = false;
            sum -= c[x[i - 1]][j];
        }
}
int main()
{
    nhap();
    x[1] = 1;
    Try(2);
    cout << ans;
}
