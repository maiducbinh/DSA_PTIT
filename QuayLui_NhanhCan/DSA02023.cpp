#include <bits/stdc++.h>

using namespace std;
int n , k , x[16];
vector<string> v;
void in()
{
    for(int i = 1 ; i <= k ; i++)
        cout << v[x[i] - 1] << " ";
    cout << endl;
}
void Try(int i)
{
    for(int j = x[i - 1] + 1 ; j <= n - k + i ; j++)
    {
        x[i] = j;
        if(i == k) in();
        else Try(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    set <string> se;
    while(n--)
    {
        string s;
        cin >> s;
        se.insert(s);
    }
    for(string i : se)
        v.push_back(i);
    n = se.size();
    Try(1);
}
