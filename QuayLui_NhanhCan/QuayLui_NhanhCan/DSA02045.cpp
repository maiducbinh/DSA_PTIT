#include <bits/stdc++.h>

using namespace std;
int n;
string s;
char x[21];

void in(int m)
{
    for(int i = 1 ; i <= m ; i++)
        cout << x[i];
    cout << " ";
}
void Try(int i , int pos)
{
    for(int j = pos ; j <= n ; j++)
    {
        x[i] = s[j];
        in(i);
        Try(i + 1 , j + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
        s = " " + s;
        Try(1 , 1);
        cout << endl;
    }
}
