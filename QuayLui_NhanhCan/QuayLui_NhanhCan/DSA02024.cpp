#include <bits/stdc++.h>

using namespace std;
int n , a[21] , x[21];
vector <string> v;

void xuli(int m)
{
    string s = "";
    for(int i = 1 ; i <= m ; i++)
        s += to_string(x[i]) + " ";
    v.push_back(s);
}
void Try(int i , int pos)
{
    for(int j = pos ; j <= n ; j++)
        if(x[i - 1] < a[j])
        {
            x[i] = a[j];
            if(i >= 2) xuli(i);
            Try(i + 1 , j + 1);
        }
}
int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    Try(1 , 1);
    sort(v.begin() , v.end());
    for(string i : v)
        cout << i << endl;
}
