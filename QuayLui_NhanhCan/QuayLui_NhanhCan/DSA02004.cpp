#include <bits/stdc++.h>

using namespace std;
int n , a[9][9];
string s;
int dx[] = {1 , 0 , 0 , -1};
int dy[] = {0 , -1 , 1 , 0};
char c[] = "DLRU";
bool ok;

void Try(int i , int j)
{
    if(i == n && j == n)
    {
        cout << s << " ";
        ok = true;
    }
    for(int k = 0 ; k < 4 ; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if(a[x][y] && x >= 1 && x <= n && y >= 1 && y <= n)
        {
            s += c[k];
            a[x][y] = 0;
            Try(x , y);
            a[x][y] = 1;
            s.pop_back();
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <=n ; j++)
                cin >> a[i][j];
        a[1][1] = 0;
        ok = false;
        Try(1 , 1);
        if(!ok) cout << -1;
        cout << endl;
    }
}
