#include <bits/stdc++.h>

using namespace std;
int n , x , a[21] , b[101];
vector <string> v;

void xuli(int m)
{
    string s = "";
    s += '{';
    for(int j = 1 ; j < m ; j++)
        s += to_string(b[j]) + " ";
    s += to_string(b[m]) + '}';
    v.push_back(s);
}

void Try(int i , int pos , int sum)
{
    for(int j = pos ; j <= n ; j++)
        if(a[j] + sum <= x)
        {
            sum += a[j];
            b[i] = a[j];
            if(sum == x) xuli(i);
            else Try(i + 1 , j , sum);
            sum -= a[j];
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        v.clear();
        cin >> n >> x;
        for(int i = 1 ; i <= n ; i++)
            cin >> a[i];
        sort(a + 1 , a + n + 1);
        Try(1 , 1 , 0);
        if(v.size() == 0) cout << -1;
        else{
            cout << v.size() << " ";
            for(string x : v) cout << x << " ";
        }
        cout << endl;
    }
}
