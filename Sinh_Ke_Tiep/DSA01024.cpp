#include <bits/stdc++.h>

using namespace std;

int s , k , x[16] , n;
vector <string> v;

void nhap()
{
    cin >> n >> k;
    set <string> se;
    while(n--)
    {
        string s;
        cin >> s;
        se.insert(s);
    }
    s = se.size();
    for(string x : se)
        v.push_back(x);
}

void out()
{
    for(int i = 1 ; i <= k ; i++)
        cout << v[x[i] - 1] << " ";
    cout << endl;
}

void Try(int i)
{
    for(int j = x[i - 1] + 1 ; j <= s - k + i ; j++)
    {
        x[i] = j;
        if(i == k) out();
        else Try(i + 1);
    }
}

int main()
{
    nhap();
    x[0] = 0;
    Try(1);
}
