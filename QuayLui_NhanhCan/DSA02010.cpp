#include <bits/stdc++.h>

using namespace std;
int n , k , a[40] , x[40] , ok;//mang 21 bi tle
vector<string> v;

void xuli(int m)
{
    string s = "";
    s += '[';
    for(int j = 1 ; j < m ; j++)
        s += to_string(x[j]) + " ";
    s += to_string(x[m]) + ']';
    v.push_back(s);
}

void Try(int i , int pos , int sum)
{
    if(sum > k) return;
    if(sum == k)
    {
        xuli(i - 1);
        ok = 1;
        return;
    }
    for(int j = pos ; j <= n ; j++)
        if(sum + a[j] <= k)
        {
            x[i] = a[j];
            Try(i + 1 , j , sum + a[j]);
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        sort(a + 1 , a + n + 1);
        v.clear();
        ok = 0;
        Try(1 , 1 , 0);
        if(!ok) cout << -1;
        else for(string x : v) cout << x;
        cout << endl;
    }
}
