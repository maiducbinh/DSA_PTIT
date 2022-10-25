#include <bits/stdc++.h>

using namespace std;
int n , k , x[50] , ok , a[50];

void ktao()
{
    for(int i = 1 ; i <= k ; i++) x[i] = i;
}

void sinh()
{
    int i = k;
    while(x[i] == n - k + i && i > 0) i--;
    if(i == 0) ok = 0;
    else{
        x[i]++;
        for(int j = i + 1 ; j <= k ; j++)
            x[j] = x[j - 1] + 1;
    }
}

int main()
{
    cin >> n >> k;
    set <int> s;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    n = s.size();
    vector <int> v;
    for(int i : s)
        v.push_back(i);
    ok = 1;
    ktao();
    while(ok)
    {
        for(int i = 1 ; i <= k ; i++)
            cout << v[x[i] - 1] << " ";
        cout << endl;
        sinh();
    }
}
