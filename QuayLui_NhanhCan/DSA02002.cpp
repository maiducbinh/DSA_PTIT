#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        vector <string> v;
        string s;
        while(n)
        {
            s = "";
            s += '[';
            for(int i = 0 ; i < n - 1 ; i++)
                s += to_string(a[i]) + " ";
            s += to_string(a[n - 1]) + ']';
            v.push_back(s);
            int temp = 0;
            for(int i = 0 ; i < n - 1 ; i++)
            {
                a[i] = a[i] + a[i + 1];
                temp = a[i];
            }
            n--;
        }
        reverse(v.begin() , v.end());
        for(string x : v) cout << x << " ";
        cout << endl;
    }
}
