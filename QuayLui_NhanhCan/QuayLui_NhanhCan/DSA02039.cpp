#include <bits/stdc++.h>

using namespace std;
int n , x[11] , ok , len;

void ktao()
{
    len = 1;
    x[1] = n;
}

void sinh()
{
    int i = len;
    while(x[i] == 1 && i > 0) i--;
    if(i == 0) ok = 0;
    else{
        x[i]--;
        int d = (len - i + 1) / x[i];
        int r = (len - i + 1) % x[i];
        len = i;
        while(d--) x[++len] = x[i];
        if(r) x[++len] = r;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ktao();
        ok = 1;
        vector <string> v;
        while(ok)
        {
            string s = "";
            s += '(';
            for(int i = 1 ; i < len ; i++)
                s += to_string(x[i]) + " ";
            s += to_string(x[len]) + ')';
            v.push_back(s);
            sinh();
        }
        cout << v.size() << endl;
        for(string x : v)
            cout << x << " ";
        cout << endl;
    }
}
