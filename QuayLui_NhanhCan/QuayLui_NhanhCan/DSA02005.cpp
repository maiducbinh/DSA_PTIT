#include <bits/stdc++.h>

using namespace std;
string s;
int dd[11] , x[11] , n;

void in()
{
    for(int i = 0 ; i < n ; i++)
        cout << s[x[i + 1] - 1] ;
    cout << " ";
}
void Try(int i)
{
    for(int j = 1 ; j <= n ; j++)
        if(dd[j] == 0)
        {
            dd[j] = 1;
            x[i] = j;
            if(i == n) in();
            else Try(i + 1);
            dd[j] = 0;
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        n = s.size();
        memset(dd, 0 , sizeof(dd));
        Try(1);
        cout << endl;
    }
}
