#include <bits/stdc++.h>

using namespace std;
string s;
int n , k , ok;

void sinh()
{
    int i = n - 1;
    while(s[i] == 'B' && i >= 0)
    {
        s[i] = 'A';
        i--;
    }
    if(i == -1) ok = 0;
    else s[i] = 'B';
}

bool check()
{
    string temp1 = string(k , 'A');
    int cnt = 0;
    for(int i = 0 ; i < n - k + 1 ; i++)
    {
        string temp2 = "";
        for(int j = i ; j < i + k ; j++)
        {
            temp2 += s[j];
        }
        if(temp2 == temp1) cnt++;
    }
    return cnt == 1;
}

int main()
{
    cin >> n >> k;
    ok = 1;
    vector <string> v;
    s = string(n , 'A');
    while(ok)
    {
        if(check()) v.push_back(s);
        sinh();
    }
    sort(v.begin() , v.end());
    cout << v.size() << endl;
    for(string x : v) cout << x << endl;
}
