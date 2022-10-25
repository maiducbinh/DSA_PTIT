#include <bits/stdc++.h>

using namespace std;

int n , a[11][11];
bool check;
string s;

void Try(int i , int j)
{
    if(i == n && j == n)
    {
        cout << s << " ";
        check = true;
    }
    if(i + 1 <= n && a[i + 1][j])
    {
        s += "D";
        //a[i + 1][j] = 0;
        Try(i + 1 , j);
        //a[i + 1][j] = 1;
        s.pop_back();
    }
    if(j + 1 <= n && a[i][j + 1])
    {
        s += "R";
        //a[i][j + 1] = 0;
        Try(i , j + 1);
        //a[i][j + 1] = 1;
        s.pop_back();
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
            for(int j = 1 ; j <= n ; j++)
                cin >> a[i][j];
        check = false;
        if(!a[1][1]) cout << -1;
        else
        {
            Try(1, 1);
            if(!check) cout << -1;
        }
        cout << endl;
    }
}
